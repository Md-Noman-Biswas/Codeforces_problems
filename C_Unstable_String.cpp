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

string s;

ll f(ll ind, ll last, vector<vector<ll>> &dp) {
    if (ind == s.size()) return 0;
    if (dp[ind][last] != -1) return dp[ind][last];

    ll cnt = 0;
    if (s[ind] == '?') {
        if (last == 0) cnt += 1 + f(ind + 1, 1, dp);
        else cnt += 1 + f(ind + 1, 0, dp);
    }
    else {
        if (s[ind] - '0' == last) return 0;
        cnt += 1 + f(ind + 1, s[ind] - '0', dp);
    }
    return dp[ind][last] = cnt;
}

void solve(){
    cin >> s;
    ll n = s.size();
    vector<vector<ll>> dp(s.size() + 1, vector<ll> (2, -1));
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            ll mx = llmn;
            mx = max(1 + f(i + 1, 0, dp), 1 + f(i + 1, 1, dp));
            ans += mx;
        }
        else {
            ans += 1 + f(i + 1, s[i] - '0', dp);
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