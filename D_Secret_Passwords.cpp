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
const int N = 2e6 + 7;
const int INF = 1e9 + 10;

vector<ll> vis(N, 0);

void dfs(ll node, vector<ll> adj[]) {
    vis[node] = 1;
    for (auto it: adj[node]) {
        if (vis[it]) continue;
        dfs(it, adj);
    }
}

void solve(){
    ll n;
    cin >> n;
    ll t = n;
    
    vector<string> s;
    vector<ll> adj[N];

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (auto it: temp) {
            adj[i].push_back(n + it - 'a');
            adj[n + it - 'a'].push_back(i);
        }
    }

    ll cnt = 0;
    for (int i = n; i < n + 26; i++) {
        if (adj[i].empty()) continue;
        if (!vis[i]) {
            dfs(i, adj);
            cnt++;
        }
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