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

void dfs(ll node, vector<ll> &vis, vector<ll> adj[]) {
    vis[node] = 1;
    for (auto it: adj[node]) {
        if (vis[it]) continue;
        dfs(it, vis, adj);
        // cout << it << " ";
    }
    cout << node << " ";
}

void solve(){
    ll n, s, e;
    cin >> n >> s >> e;
    vector<ll> adj[n + 1];
    vector<ll> vis(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
    dfs(e, vis, adj);
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