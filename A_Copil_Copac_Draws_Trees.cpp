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
const int N = 2e5 + 7;
const int INF = 1e9 + 10;

vector<ll> vis(N, 0);
map<pair<ll, ll>, ll> record;

void dfs(int vertex, int parent, vector<pair<ll, ll>> adj[], vector<ll> &dp) {
    vis[vertex] = true;

    for (auto it: adj[vertex]) {
        ll child = it.first;
        ll rank = it.second;
        if (vis[child]) continue;
        record[{vertex, child}] = rank;
        record[{child, vertex}] = rank;
        if (vertex == 1) {
            dp[child] = 1;
        }
        else {
            if (rank >= record[{vertex, parent}]) {
                dp[child] = dp[vertex];
            }
            else {
                dp[child] = dp[vertex] + 1;
            }
        }
        dfs(child, vertex, adj, dp);
    }

}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> adj[n + 1];
    vector<ll> dp(n + 1, llmx);
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }   
    dfs(1, -1, adj, dp);

    // for (auto it: dp) cout << it << " ";
    // cout << nl;

    ll ans = llmn;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dp[i]);
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
        record.clear();
        vis.assign(N, 0);
        solve();
    }
    return 0;
}