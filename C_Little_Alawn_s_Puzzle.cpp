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

void dfs(int vertex, vector<ll> g[], vector<ll> &vis){

    vis[vertex] = true;
    for(int child: g[vertex]){
        if(vis[child]) continue;
        dfs(child, g, vis);
    }
    
}


void solve(){
    int  n;
    cin >> n; 
    vector<ll> g[n + 1];

    vector<ll> arr(n), brr(n), vis(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    for (int i = 0; i < n; i++) {
        g[arr[i]].push_back(brr[i]);
    }

    int ct = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        dfs(i, g, vis);
        ct++;
    }
   // cout << ct << nl;
    ll ans = 1;
    while (ct--) {
        ans = (ans * 2) % mod;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}