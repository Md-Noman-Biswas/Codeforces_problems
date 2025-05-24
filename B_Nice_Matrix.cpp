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
        vector<vector<ll>> ans(n, vector<ll> (m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }   

    ll ope = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vector<ll> temp;
            temp.push_back(arr[i][j]);
            temp.push_back(arr[i][m - j - 1]);
            temp.push_back(arr[n - i - 1][j]);
            temp.push_back(arr[n - i - 1][m - j - 1]);
            sort(temp.begin(), temp.end());
            ll mid = (temp[1] + temp[2]) / 2;
            ans[i][j] = mid;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           ope += (abs(arr[i][j] - ans[i][j]));
        }
    }
    cout << ope << nl;
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