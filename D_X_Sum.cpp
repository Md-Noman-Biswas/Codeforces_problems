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
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }   
    ll ans = llmn;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll sum = arr[i][j];
            for (int k = 1; k < max(n, m); k++) {
                if (i - k >= 0 && j - k >= 0) {
                    sum += arr[i - k][j - k];
                }
                if (i + k < n && j + k < m) {
                    sum += arr[i + k][j + k];
                }
            } 

            for (int k = 1; k < max(n, m); k++) {
                if (i - k >= 0 && j + k < m) {
                    sum += arr[i - k][j + k];
                }
                if (i + k < n && j - k >= 0) {
                    sum += arr[i + k][j - k];
                }
            }
            ans = max(ans, sum);
            // cout << sum << " ";
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