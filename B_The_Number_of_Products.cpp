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

ll f(ll ind, ll k, vector<ll> &arr, vector<vector<ll>> &dp) {
    if (dp[ind][k] != -1) return dp[ind][k];
    if (ind == 0) {
        if (k == 0) return dp[ind][k] = arr[ind] > 0 ? 1 : 0;
        if (k == 1) return dp[ind][k] = arr[ind] < 0 ? 1 : 0;
    }
    else {
        if (k == 0) {
            if (arr[ind] > 0) {
                dp[ind][k] = 1 + f(ind - 1, 0, arr, dp);
            }
            else {
                dp[ind][k] = f(ind - 1, 1, arr, dp);
            }
        }
        else {
            if (arr[ind] > 0) {
                dp[ind][k] = f(ind - 1, 1, arr, dp);
            }
            else {
                dp[ind][k] = 1 + f(ind - 1, 0, arr, dp);
            }
        }
        return dp[ind][k];
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<vector<ll>> dp(n, vector<ll> (2, -1));
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        ll x1 = f(i, 0, arr, dp);
        ll x2 = f(i, 1, arr, dp);
    }
    ll neg = 0, pos = 0;
    for (int i = 0; i < n; i++) {
        pos += dp[i][0];
        neg += dp[i][1];
    }
    // cout << "H";
    cout << neg << " " << pos << nl;
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