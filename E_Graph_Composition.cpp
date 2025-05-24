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


class DisjointSet{
    vector<int> rank, parent, size;
    public:
    DisjointSet(int n){
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for(int i = 0; i <= n; i++){
            parent[i] = i;
        }
    }
    //path Compression
    int findPar(int node){
        if(node == parent[node]) return node;
        return parent[node] = findPar(parent[node]);
    }
    //TC -> 4*alpha which is constant
    void unionByRank(int u, int v){
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    //TC -> 4 * alpha
    void unionBySize(int u, int v){
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};


void solve(){
    ll n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<pair<ll, ll>> adj1, adj2;
    DisjointSet ds1(n), ds2(n);

    for (int i = 0; i < m1; i++) {
        ll u, v;
        cin >> u >> v;
        adj1.push_back({--u, --v});
    }   
    for (int i = 0; i < m2; i++) {
        ll u, v;
        cin >> u >> v;
        adj2.push_back({--u, --v});
    }   
    for (auto it: adj2) {
        ds2.unionBySize(it.first, it.second);
    }
    ll need_to_remove = 0;
    for (auto it: adj1) {
        if (ds2.findPar(it.first) != ds2.findPar(it.second)) {
            need_to_remove++;
        }
        else {
            ds1.unionBySize(it.first, it.second);
        }
    }

    set<ll> st1, st2;
    for (int i = 0; i < n; i++) {
        st1.insert(ds1.findPar(i));
        st2.insert(ds2.findPar(i));
    }
    ll ans = need_to_remove;
    ans += (st1.size() - st2.size());
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