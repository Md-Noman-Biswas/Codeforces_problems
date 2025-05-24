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

ll n;
vector<vector<ll>> arr(2, vector<ll> (N, 0));
vector<vector<ll>> dp(2, vector<ll> (N, -1));

ll f(ll ind, ll last) {

    if (ind >= n) return 0;
    
    if (dp[last][ind] != -1) return dp[last][ind];

    if (last == 0) {
        ll not_take = 0 + f(ind + 1, 0);
        ll take = arr[1][ind] + f(ind + 1, 1);
        return dp[last][ind] = max(take, not_take);
    }
    else {
        ll not_take = 0 + f(ind + 1, 1);
        ll take = arr[0][ind] + f(ind + 1, 0);
        return dp[last][ind] = max(take, not_take);
    }
}

void solve(){
    cin >> n;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }   
    cout << max(f(0, 0), f(0, 1)) << nl;
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