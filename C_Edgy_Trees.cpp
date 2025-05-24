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

vector<pair<ll, ll>> adj[N];
vector<ll> vis(N);
ll sz = 0;
ll dfs(ll node) {
    vis[node] = 1;
    sz++;
    for (auto it: adj[node]) {
        if (!vis[it.first]) {
            dfs(it.first);
        }
    }
    return sz;
}

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL *a) % mod;
        b = b >> 1;
    }
    return ans;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll ans = power(n, k);
    for (int i = 0; i < n; i++) {
        ll u, v, w;
        cin >> u >> v >> w;

        if (w == 0) {
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            // cout << i << nl;
            sz = 0;
            ans -= power(dfs(i), k);
            ans += mod;
            ans %= mod;
        }
    }
    cout << ans << nl;
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