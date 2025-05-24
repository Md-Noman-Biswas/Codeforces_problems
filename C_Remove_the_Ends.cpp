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
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<vector<ll>> dp(n + 1, vector<ll> (3, 0));

    for (int j = 0; j < 3; j++) dp[n][j] = 0;

    // Compute DP table from right to left
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            ll ans = dp[i + 1][j]; 

            if (j == 0) { // Fresh start
                if (v[i] >= 0) ans = max(ans, v[i] + dp[i + 1][1]);
                if (v[i] < 0) ans = max(ans, abs(v[i]) + dp[i + 1][2]); 
            } 
            else if (j == 1) { // Currently deleting prefix
                if (v[i] >= 0) ans = max(ans, v[i] + dp[i + 1][1]); 
                if (v[i] < 0) ans = max(ans, abs(v[i]) + dp[i + 1][2]); 
            } 
            else if (j == 2) { // Currently deleting suffix
                if (v[i] < 0) ans = max(ans, abs(v[i]) + dp[i + 1][2]);
            }
            dp[i][j] = ans;
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << nl;
    // }

    cout << dp[0][0] << nl;
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