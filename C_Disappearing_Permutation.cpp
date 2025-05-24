#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;


void dfs(ll node, vector<ll> adj[], vector<ll> &vis, ll &cnt) {
    vis[node] = 1;
    cnt++;
    for (auto it: adj[node]) {
        if (!vis[it]) {
            dfs(it, adj, vis, cnt);
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n + 1), brr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) cin >> brr[i];

    vector<ll> adj[n + 1];
    vector<ll> vis(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        adj[brr[i]].push_back(arr[brr[i]]);
    }

    // for (int i = 1; i <= n; i++) {
    //     cout << i << " -> ";
    //     for (auto it: adj[i]) cout << it << " ";
    //     cout << nl;
    // }

    ll ope = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[brr[i]]) {
            // cout << i << " *" << nl;
            cout << ope << " ";
            continue;
        }
        ll cnt = 0;
        dfs(brr[i], adj, vis, cnt);
        ope += cnt;
        cout << ope << " ";
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