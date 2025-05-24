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

bool check(ll n, ll m, ll k, ll mid) {
    ll total = (m % (mid + 1)) * n;
    ll seg = (m / (mid + 1));
    seg *= mid;
    seg *= n;
    total += seg;
    // cout << mid << " " << seg << nl;
    return total >= k;
}

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    
    ll l = 0, r = m - 1;
    ll ans = m;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(n, m, k, mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}