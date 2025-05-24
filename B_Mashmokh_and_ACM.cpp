#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 2e3 + 7;
const int INF = 1e9 + 10;

ll n, k;
vector<vector<ll>> dp(N, vector<ll> (N, -1));

ll f(ll i, ll k) {
    if (k == 0) return 1;
    if (dp[i][k] != -1) return dp[i][k];

    ll ans = 0;
    for (int j = i; j <= n; j += i) {
        if (j % i == 0) {
            ans += f(j, k - 1) % mod;
            ans %= mod;
        }
    }
    return dp[i][k] = ans;
}

void solve(){
    cin >> n >> k;
    cout << f(1, k) << nl;
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