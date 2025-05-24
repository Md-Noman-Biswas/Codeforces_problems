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


ll dist(ll i, ll j, ll n, ll m) {
    ll d1 = abs(i - 1) + abs(j - 1);
    ll d2 = abs(i - 1) + abs(j - m);
    ll d3 = abs(i - n) + abs(j - 1);
    ll d4 = abs(i - n) + abs(j - m);
    ll d = max({d1, d2, d3, d4});
    return d;
}


void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n + 1, vector<ll> (m + 1, 1e9));
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            arr[i][j] = dist(i, j, n, m);
            ans.push_back(arr[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto it: ans) {
        cout << it << " ";
    }
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