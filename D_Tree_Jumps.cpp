#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 998244353
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void dfs(ll node, vector<ll> adj[], vector<ll> &level) {
    for (auto it: adj[node]) {
        if (level[it] != -1) continue;
        level[it] = level[node] + 1;
        dfs(it, adj, level);
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> parent(n + 1, 0);
    vector<ll> adj[n + 1];
    vector<ll> level_nodes[n + 1];
    parent[1] = 1;
    for (int i = 2; i <= n; i++) cin >> parent[i];
    
    for (int i = 1; i <= n; i++) {
        adj[parent[i]].push_back(i);
    }

    vector<ll> level(n + 1, -1);
    level[1] = 1;
    dfs(1, adj, level);

    for (int i = 1; i <= n; i++) {
        level_nodes[level[i]].push_back(i);
    }

    // for (auto it: level) cout << it << " ";
    // cout << nl;

    vector<ll> dp(n + 1, 0);
    ll sum = 0;
    for (int i = n; i >= 2; i--) {
        if (level_nodes[i].empty()) continue;
        ll s = 0;
        for (auto v: level_nodes[i]) {
            dp[v] = (1 + sum) % mod; 
            for (auto u: adj[v]) {
                dp[v] -= dp[u];
                dp[v] = (dp[v] % mod + mod) % mod; 
            }
            s += dp[v];
            s %= mod;
        }
        sum = s;
    }

    cout << (sum + 1) % mod << nl;
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