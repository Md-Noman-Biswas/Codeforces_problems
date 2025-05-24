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
    vector<vector<ll>> hsh(n, vector<ll> (n * m + 1, 0));
    ll arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            hsh[i][arr[i][j]] = 1;
        }
    }   
    if (n == 1) {
        cout << 1 << nl;
        return;
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n * m + 1; j++) {
    //         cout << hsh[i][j] << " ";
    //     }
    //     cout << nl;
    // }   
    vector<ll> ans;
    ll last = -1;
    bool flag = true;
    for (int i = 0; i < n * m; i++) {
        for (int j = 0; j < n; j++) {
            if (hsh[j][i]) {
                if (j != last) {
                    ans.push_back(j + 1);
                    last = j;
                    break;
                }
                else {
                    flag = false;
                    // cout << i << " ";
                    break;
                }
            }
        }
        if (!flag) {
            break;
        }
    }
    // cout << ans.size() << nl;
    if (!flag) {
        cout << -1 << nl;
    }
    else {
        vector<ll> temp(n);
        for (int i = 0; i < n; i++) temp[i] = ans[i];
        for (int i = n; i < ans.size(); i++) {
            if (ans[i] != temp[i % n]) {
                cout << -1 << nl;
                return;
            }
        }
        for (int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << nl;
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