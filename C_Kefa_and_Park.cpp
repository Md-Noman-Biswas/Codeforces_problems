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

vector<int> adj[N];
vector<ll> vis(N, 0);
vector<ll> cats(N);
ll cnt = 0;
ll n, k;

void dfs(ll node, ll cons){
    vis[node] = 1;
    if(cats[node] == 1) cons++;
    else cons = 0;
    if(cons > k) return;
    bool flag = true;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, cons);
            flag = false;
        }
    }
    if(flag) cnt++;
}

void solve(){
    cin >> n >> k;
    ll temp = n - 1;
    for(int i = 1; i <= n; i++){
        cin >> cats[i];
    }
    while(temp--){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
    dfs(1, 0);
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