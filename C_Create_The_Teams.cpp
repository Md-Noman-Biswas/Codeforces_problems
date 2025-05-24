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

ll f(ll ind, ll n, ll x, vector<ll> &arr, vector<ll> &dp) {
    if (ind >= n) return 0;
    if (dp[ind] != -1) return dp[ind];
    
    ll req = (x + arr[ind] - 1) / arr[ind]; 
    if (ind + req > n) return dp[ind] = 0; 
    
    ll take = 1 + f(ind + req, n, x, arr, dp);

    ll not_take = f(ind + 1, n, x, arr, dp);

    return dp[ind] = max(take, not_take);
}


void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());


    vector<ll> dp(n, -1);
    f(0, n, x, arr, dp);
    cout << *max_element(dp.begin(), dp.end()) << nl;

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