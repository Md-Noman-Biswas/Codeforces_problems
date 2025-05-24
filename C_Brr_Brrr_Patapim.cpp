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
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> arr(n + 1, vector<ll> (n + 1));
    vector<ll> hsh(2 * n + 1, 0);
    vector<ll> ans(2 * n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            hsh[arr[i][j]] = 1;
            ans[i + j] = arr[i][j];
        }
    }

    // for (int i = 1; i <= 2 * n; i++) cout << ans[i] << " ";
    // cout << nl;

    for (int i = 1; i <= 2 * n; i++) {
        if (ans[i] == 0) {
            for (int j = 1; j <= 2 * n; j++) {
                if (!hsh[j]) {
                    ans[i] = j;
                    hsh[j] = 1;
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= 2 * n; i++) cout << ans[i] << " ";
    cout << nl;
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