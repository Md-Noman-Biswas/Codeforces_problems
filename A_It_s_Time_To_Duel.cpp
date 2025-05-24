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

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    set<ll> st;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    if (st.size() == 1) {
        YES;
        return;
    }

    bool prev = false;
    
    for (int i = 0; i < n; i++) {
        bool flag = false;
        if (arr[i] == 0) prev = true;
        if (arr[i] == 1) {
        
        }
        else {
            if (i - 1 >= 0 && i + 1 < n) {
                if (arr[i - 1] == 1 && arr[i + 1] == 1) flag = true;
            }
            else if (i - 1 >= 0) {
                if (arr[i - 1] == 1) flag = true;
            }
            else {
                if (arr[i + 1] == 1) flag = true;
            }
            if (!flag) {
                YES;
                return;
            }
        }
    }
    NO;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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