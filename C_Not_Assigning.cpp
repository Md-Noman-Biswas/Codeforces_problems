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

ll swap_color(ll col) {
    if (col == 2) return 5;
    else return 2;
}

void dfs(int node, int col, vector<ll> &color, vector<ll> adj[], map<pair<ll, ll>, ll> &position, vector<ll> &ans){
    color[node] = col;
    for(auto it: adj[node]){
        if (color[it] != -1) continue;
        ans[position[{node, it}]] = col;
        dfs(it, swap_color(col), color, adj, position, ans);
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    vector<ll> degree(n + 1, 0);
    vector<ll> color(n + 1, -1);
    vector<ll> ans(n + 1, 0);
    map<pair<ll, ll>, ll> position;
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
        position[{u, v}] = i;
        position[{v, u}] = i;
    }   

    bool flag = true;
    for (auto it: degree) {
        // cout << it << " ";
        if (it > 2) {
            flag = false;
            break;
        }
    }
    // cout << nl;
    if (!flag) {
        cout << -1 << nl;
        return;
    } 

    ll leaf = 0;
    ll v = llmx;
    for (int i = 1; i <= n; i++) {
        if (degree[i] < v) {
            v = degree[i];
            leaf = i;
        }
    }
    dfs(leaf, 2, color, adj, position, ans);

    for (int i = 0; i < n - 1; i++) {
        cout << ans[i] << " ";
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