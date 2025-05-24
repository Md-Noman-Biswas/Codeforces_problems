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

void solve(){
    string s;
    cin >> s;
    ll n = s.size();

    vector<vector<ll>> dp(n + 1, vector<ll> (8, 0));
    vector<vector<ll>> prev(n + 1, vector<ll> (8, -1));

    for (int i = 0; i < n; i++) dp[i][(s[i] - '0') % 8] = 1;
    // dp[0][(s[0] - '0') % 8] = 1;

    for (int i = 1; i < n; i++) {
        //starting new
        dp[i][(s[i] - '0') % 8] = 1;

        for (int j = 0; j < 8; j++) {
            //extending
            if (dp[i - 1][j]) {
                ll current_rem = (j * 10 + (s[i] - '0')) % 8;
                dp[i][current_rem] = 1;
                prev[i][current_rem] = j;
            }
            //skipping
            if (dp[i - 1][j]) {
                dp[i][j] = 1;
                prev[i][j] = j;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dp[i][0]) {
            string ans;
            ll r = i, l = 0;
            while (1) {
                if (prev[r][l] == -1 || prev[r][l] != l) {
                    ans.push_back(s[r]);
                }

                if (prev[r][l] == -1) break;
                l = prev[r][l];
                r--;
            }
            YES;
            reverse(ans.begin(), ans.end());
            cout << ans << nl;
            return;
        }
    }
    NO;
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