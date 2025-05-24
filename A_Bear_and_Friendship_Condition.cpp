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
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

vector<ll> current_component;

void dfs(ll node, vector<ll> adj[], vector<ll> &vis) {
    vis[node] = 1;
    current_component.push_back(node);
    for (auto it: adj[node]) {
        if (vis[it]) continue;
        dfs(it, adj, vis);
    }
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> adj[n + 1];
    vector<ll> degree(n + 1, 0);
    for (int i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> vis(n + 1);
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            current_component.clear();
            dfs(i, adj, vis);
            ll sz = current_component.size();
            for (auto it: current_component) {
                if (degree[it] != sz - 1) {
                    flag = false;
                    break;
                }
            }
        }
    }

    if (flag) YES;
    else NO;
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