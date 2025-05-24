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
const int N = 2e5 + 7;
const int INF = 1e9 + 10;

ll n;

ll f(ll ind, bool last, vector<ll> &arr, vector<vector<ll>> &dp) {
    if (ind == n) return 0;
    if (ind > n) return llmx;
    //0->friend
    //1->me

    if (dp[ind][last] != -1) return dp[ind][last];

    ll way1 = llmx, way2 = llmx;
    if (last == 1) {
        way1 = (arr[ind] == 1) + f(ind + 1, !last, arr, dp);
        if (ind + 1 < n) way2 = (arr[ind] == 1) + (arr[ind + 1] == 1) + f(ind + 2, !last, arr, dp);
    }
    else {
        way1 = f(ind + 1, !last, arr, dp);
        way2 = f(ind + 2, !last, arr, dp);
    }
    return dp[ind][last] = min(way1, way2);
}

void solve(){
    cin >> n;
    vector<ll> arr(n);
    vector<vector<ll>> dp(n + 1, vector<ll> (2, -1));
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << f(0, 1, arr, dp) << nl;
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