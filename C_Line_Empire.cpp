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
const int N = 1e3 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> arr(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<ll> pref(n + 1, 0), suff(n + 2, 0);
    pref[1] = arr[1];
    suff[n] = arr[n];
    for (int i = 2; i <= n; i++) pref[i] = pref[i - 1] + arr[i];
    for (int i = n - 1; i >= 0; i--) suff[i] = suff[i + 1] + arr[i];

    ll ans = suff[0] * b;
    ll before = 0;
    for (int i = 1; i <= n; i++) {
        before += (arr[i] - arr[i - 1]) * (a + b);
        ll after = (suff[i + 1] - (n - i) * arr[i]) * b; 
        // cout << before << " " << after << nl;
        ans = min(ans, before + after);
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