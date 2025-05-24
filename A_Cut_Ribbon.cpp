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
const int N = 4001;
const int INF = 1e9 + 10;

ll dp[N];

ll f(ll n, ll a, ll b, ll c) {
    if (n == 0) return 0;
    if (n < 0) return llmn;
    if (dp[n] != -1) return dp[n];
    ll case1 = 1 + f(n - a, a, b, c);
    ll case2 = 1 + f(n - b, a, b, c);
    ll case3 = 1 + f(n - c, a, b, c);

    return dp[n] = max({case1, case2, case3});
}

void solve(){
    ll n, a, b, c;
    memset(dp, -1, sizeof dp);
    cin >> n >> a >> b >> c;
    cout << f(n, a, b, c) << nl;
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