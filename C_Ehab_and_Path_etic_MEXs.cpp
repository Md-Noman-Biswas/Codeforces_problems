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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> adj[n + 1];
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back({v, -1});
        adj[v].push_back({u, -1});
        if (u > v) swap(u, v);
        pr.push_back({u, v});
    }   
    ll cnt = 0;
    map<pair<ll, ll>, ll> ans;
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() > 1) continue;
        // adj[i][0].second = cnt;
        // // for (auto it: adj[i]) {
        // //     adj[i][] = cnt;
        // //     cnt++;
        // // }
        auto temp = adj[i].front();
        ll node1 = i;
        ll node2 = temp.first;
        if (node1 > node2) swap(node1, node2);
        if (ans.find({node1, node2}) == ans.end()) {
            ans[{node1, node2}] = cnt;
            cnt++;
        }
    }

    // for (auto it: ans) {
    //     cout << it.first.first << ' ' << it.first.second << " -> " << it.second << nl;
    // }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            // cout << i << " ";
            // cout << it.first << " " << it.second << nl;
            ll node1 = i;
            ll node2 = adj[i][j].first;
            if (node1 > node2) swap(node1, node2);
            if (ans.find({node1, node2}) == ans.end()) {
                ans[{node1, node2}] = cnt;
                cnt++;
            }
        }
    }

    for (auto it: pr) {
        cout << ans[{it.first, it.second}] << nl;
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