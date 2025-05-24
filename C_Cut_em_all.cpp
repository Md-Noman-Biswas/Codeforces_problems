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

vector<ll> sub(N, 0);
vector<ll> adj[N];

ll dfs(ll node, ll parent) {
    sub[node] = 1;
    for (auto it: adj[node]) {
        if (it == parent) continue;
        sub[node] += dfs(it, node);
    } 
    return sub[node];
}


void solve(){
    ll n;
    cin >> n;
    vector<ll> indegree(n + 1);
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        indegree[u]++;
        indegree[v]++;
    }
    if (n % 2 != 0) {
        cout << -1 << nl;
        return;
    }
    dfs(1, 0);
    ll cnt = 0;
    for (int i = 2; i <= n; i++) {
        cnt += (sub[i] % 2 == 0);
    }
    cout << cnt << nl;
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