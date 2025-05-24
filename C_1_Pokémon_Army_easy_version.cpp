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
const int N = 3e5 + 7;
const int INF = 1e9 + 10;

ll dp[N][2];


ll f(ll i, bool flag, vector<ll> &arr) {
    if (i < 0) return 0;
    if (dp[i][flag] != -1) return dp[i][flag];

    if (flag) {
        ll not_take = 0 + f(i - 1, flag, arr);
        ll take = INT_MIN;
        take = arr[i] + f(i - 1, !flag, arr);
        return dp[i][flag] = max(take, not_take); 
    }  
    else {
        ll not_take = 0 + f(i - 1, flag, arr);
        ll take = INT_MIN;
        take = -arr[i] + f(i - 1, !flag, arr);
        return dp[i][flag] = max(take, not_take);
    }
}


void solve(){
    memset(dp, -1, sizeof dp);
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    ll ans = llmn;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << f(n - 1, 1, arr) << nl;
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