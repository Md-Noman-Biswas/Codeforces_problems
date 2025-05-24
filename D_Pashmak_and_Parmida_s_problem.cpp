#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
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


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<pair<ll, ll>> left(n), right(n);
    // map<pair<ll, ll>, ll> mp;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        // mp[{arr[i], i}]++;
        mp[arr[i]]++;
        left[i] = {mp[arr[i]], i};
    }
    mp.clear();
    for (int i = n - 1; i >= 0; i--) {
        mp[arr[i]]++;
        right[i] = {mp[arr[i]], i};
    }
    ll ans = 0;
    ordered_set<pair<ll, ll>> st;
    for (int i = n - 1; i >= 0; i--) {
        ans += st.order_of_key(left[i]);
        st.insert(right[i]);
    }
    cout << ans << nl;
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
    solve();
    return 0;
}