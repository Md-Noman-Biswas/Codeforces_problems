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
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> grid(n, vector<ll>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    if(n == 1){
        YES;
        return;
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " " << grid[n - i - 1][n - j - 1] << nl;
            if(grid[i][j] != grid[n - i - 1][n - j - 1]){
                cnt++;
            }
        }
    }
    cnt /= 2;
    if(cnt > k){
        NO;
    }else{
        k -= cnt;
        if(k % 2 != 0){
            if(n % 2 != 0) YES;
            else NO;
        }else{
            YES;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}