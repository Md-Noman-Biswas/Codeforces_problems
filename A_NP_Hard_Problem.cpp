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

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> adj[n + 1];
    for (int i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   

    vector<ll> color(n + 1, -1);

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        queue<ll> q;
        if (color[i] != -1) continue; 
        q.push(i);
        color[i] = 1;
        while (!q.empty()) {
            ll top = q.front();
            q.pop();
            for (auto it: adj[top]) {
                if (color[it] == color[top]) {
                    flag = false;
                    break;
                }
                if (color[it] != -1) continue;
                color[it] = (!color[top]);
                q.push(it);
            }
        }
    }
    
    vector<ll> ans1, ans2;
    for (int i = 1; i <= n; i++) {
        if (color[i] == 1) ans1.push_back(i);
        else if (color[i] == 0) ans2.push_back(i);
    }
    // cout <<nl;

    if (!flag) {
        cout << -1 << nl;
    }
    else {
        cout << ans1.size() << nl;;
        for (auto it: ans1) cout << it << " ";
        cout << nl;

        cout << ans2.size() << nl;
        for (auto it: ans2) cout << it << " ";
        cout << nl;
    }
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