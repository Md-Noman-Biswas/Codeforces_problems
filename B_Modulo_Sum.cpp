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
const int N = 1e3 + 7;
const int M = 1e3 + 7;
const int INF = 1e9 + 10;

ll m;
ll n;
// vector<vector<ll>> dp(N, vector<ll> (m, 0)); 

ll dp[N][M][2];

int f(int ind, int sum, int flag, vector<ll> &arr) {
    if (ind == n) return (sum == 0 && flag);
    if(dp[ind][sum][flag] != -1) return dp[ind][sum][flag];

    int way1 = f(ind + 1, (sum + arr[ind]) % m, 1, arr);
    int way2 = f(ind + 1, (sum), flag, arr);
    
    return dp[ind][sum][flag] = way1 + way2;
}

void solve(){
    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] %= m;
    }
    
    if (n >= m) {
        YES;
    }
    else {
        // cout << f(0, 0, 0) << nl;
        if (f(0, 0, 0, arr)) {
            YES;
        }
        else {
            NO;
        }
    }
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