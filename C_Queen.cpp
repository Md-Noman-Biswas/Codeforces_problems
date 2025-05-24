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

ll vis[N];
vector<ll> adj[N];
vector<ll> type(N);
vector<ll> ans;
ll n;

ll dfs(int vertex){

    vis[vertex] = true;
    ll all_child_bad = type[vertex];
    // cout << vertex << " ";
    for(int child: adj[vertex]){
        if(vis[child]) continue;
        all_child_bad &= dfs(child);
    }

    if (all_child_bad) {
        ans.push_back(vertex);
    }
    
    return type[vertex];
}


void solve(){
    cin >> n;
    ll u = 0;
    ll root;
    while (n--) {
        ll v, c;
        cin >> v >> c;
        u++;
        type[u] = c;
        if (v == -1) {
            root = u;
            continue;
        }
        adj[v].push_back(u);
        adj[u].push_back(v);
    }   
    dfs(root);
    cout << nl;
    if (ans.empty()) {
        cout << -1 << nl;
        return;
    }
    sort(ans.begin(), ans.end());
    for (auto it: ans) cout << it << " ";
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
    solve();
    return 0;
}