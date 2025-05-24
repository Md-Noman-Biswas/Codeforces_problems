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


double dfs(ll node, vector<ll> adj[], vector<ll> &vis) {
    vis[node] = 1;
    ll child = 0;
    double sum = 0.0;
    for (auto it: adj[node]) {
        if (vis[it]) continue;
        child++;
        sum += dfs(it, adj, vis);
    }
    if (child == 0) return 0.0;
    return (1 + (sum / child));
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    vector<ll> leaf;
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
    vector<ll> vis(n + 1, 0);
    double avg = 0;
    double res = dfs(1, adj, vis);
    cout << fixed << setprecision(9) << res << nl;
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