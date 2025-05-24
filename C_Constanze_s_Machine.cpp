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


bool check(char a, char b) {
    if (a == 'n' && b == 'n') return true;
    if (a == 'u' && b == 'u') return true;
    return false;
}

void solve(){
    string s;
    cin >> s;
    for (auto it: s) {
        if (it == 'm' || it == 'w') {
            cout << 0 << nl;
            return;
        }
    }   
    vector<ll> dp(s.size(), 1);
    dp[0] = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1] && check(s[i], s[i - 1])) {
            if (i <= 1) dp[i] = (dp[i] + dp[i - 1]) % mod;
            else {
                dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
            }
        }
        else {
            dp[i] = dp[i - 1];
        }
    }
    cout << dp[s.size() - 1] % mod << nl;
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