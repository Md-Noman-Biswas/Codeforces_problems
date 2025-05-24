#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ordered_set<pair<ll,int>> st;
    bool flag1 = false;
    int seg1 = -1;
    for (int i = 0; i < n - 2; i++) {
        st.insert({arr[i], i});
        ll mid = (i + 2) / 2; 
        ll ind = st.order_of_key({k + 1, 0});
        if (mid <= ind) {
            flag1 = true;
            seg1 = i;
            break;
        }
    }

    if (flag1 && seg1 % 2 == 0 && seg1 + 1 < n && arr[seg1 + 1] > k && n > 3) {
        seg1++;
    }

    bool flag2 = false;
    st.clear();
    int sz = 0;
    if (seg1 != -1) {
        for (int i = seg1 + 1; i < n - 1; i++) {
            st.insert({arr[i], i});
            sz++;
            ll mid = (sz + 1) / 2;
            ll ind = st.order_of_key({k + 1, 0});
            if (mid <= ind) {
                flag2 = true;
                break;
            }
        }
    }

    bool flag3 = false;
    int seg2 = -1;
    st.clear();
    sz = 0;
    for (int i = n - 1; i >= 2; i--) {
        st.insert({arr[i], i});
        sz++;
        ll mid = (sz + 1) / 2;
        ll ind = st.order_of_key({k + 1, 0});
        if (mid <= ind) {
            flag3 = true;
            seg2 = i;
            break;
        }
    }

    bool flag4 = false;
    st.clear();
    sz = 0;
    if (seg2 != -1) {
        for (int i = seg2 - 1; i >= 1; i--) {
            st.insert({arr[i], i});
            sz++;
            ll mid = (sz + 1) / 2;
            ll ind = st.order_of_key({k + 1, 0});
            if (mid <= ind) {
                flag4 = true;
                break;
            }
        }
    }

    if ((flag1 && flag2) || (flag3 && flag4) || (flag1 && flag3 && seg1 + 1 <= seg2)) {
        YES;
    } else {
        NO;
    }
}
/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}