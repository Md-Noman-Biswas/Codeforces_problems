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
#define mod 998244353
const int N = 5e5 + 7;
const int INF = 1e9 + 10;

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL *a) % mod;
        b = b >> 1;
    }
    return ans;
}

vector<ll> fact(N);
void pre() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) fact[i] = (fact[i - 1] * i) % mod;
}

ll f(ll i, ll j, vector<ll> &hsh, vector<vector<ll>> &dp) {
    if (i == 0 && j == 0) return 1;
    if (j == 0) return 0;

    if (dp[i][j] != -1) return dp[i][j];

    ll ans = f(i, j - 1, hsh, dp);
    if (i - hsh[j] >= 0 && hsh[j] > 0) ans = (ans + f(i - hsh[j], j - 1, hsh, dp)) % mod;

    return dp[i][j] = ans;
}

void solve(){
    vector<ll> hsh(27, 0);
    ll n = 0;
    for (int i = 1; i <= 26; i++) {
        cin >> hsh[i];
        n += hsh[i];
    }

    vector<vector<ll>> dp(n + 1, vector<ll> (27, -1));
    ll ans = f(n / 2, 26, hsh, dp);
    // cout << ans << nl;
    ans = (ans * fact[n / 2]) % mod;
    ans = (ans * fact[(n + 1) / 2]) % mod;

    for (int i = 1; i <= 26; i++) {
        if (hsh[i] > 0) {
            ans = ans * power(fact[hsh[i]], mod - 2) % mod;
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
    pre();
    while(t--) {
        solve();
    }
    return 0;
}