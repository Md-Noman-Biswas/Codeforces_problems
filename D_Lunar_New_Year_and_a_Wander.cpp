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

vector<ll> ans;
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> adj[n + 1];
    vector<vector<pair<ll, vector<ll>>>> adjj(n + 1);

    // vector<pair<ll, vector<ll>>> edges;
    for (int i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vector<ll> vis(n + 1, 0);
    pq.push(1);
    vis[1] = 1;
    

    while(!pq.empty()) {
        ll top = pq.top();
        pq.pop();
        ans.push_back(top);
        for (auto it: adj[top]) {
            if (vis[it]) continue;
            pq.push(it);
            vis[it] = 1;
        }
    }

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