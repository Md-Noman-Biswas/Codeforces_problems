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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    return p1.second > p2.second;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    map<ll, ll> mp;
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        mp[u]++;
        mp[v]++;
    }
    set<ll> st;
    for (auto it: mp) {
        pr.push_back({it.first, it.second});
    }
    map<ll, ll> mp2 = mp;

    sort(pr.begin(), pr.end(), cmp);
    st.insert(pr[0].first);
    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    // cout << nl;

    ll mx = pr[0].second;
    vector<ll> mx_nodes;
    for (int i = 0; i < pr.size(); i++) {
        if (pr[i].second == mx) {
            mx_nodes.push_back(pr[i].first);
        }
    }
    int sz = mx_nodes.size();
    // cout << sz << nl;
    ll ans = llmn;
    for (int i = 0; i < min(2, sz); i++) {
        ll ultimate_node = mx_nodes[i];
        DisjointSet ds(n + 1);
        st.clear();
        st.insert(ultimate_node);
        // cout << ultimate_node << nl;
        for (auto it: adj[ultimate_node]) {
            mp2[it]--;
            mp2[ultimate_node]--;
        }
        // for (auto it: mp2) cout << it.first << " " << it.second << nl;
        // cout << nl;
        pr.clear();
        for (auto it: mp2) {
            pr.push_back({it.first, it.second});
        }
        sort(pr.begin(), pr.end(), cmp);
        st.insert(pr[0].first);

        // for (auto it: st) cout << it << nl;

        for (int i = 1; i <= n; i++) {
            if (st.find(i) == st.end()) {
                // cout << i << " -> ";
                for (auto it: adj[i]) {
                    if (st.find(it) == st.end()) {
                        // cout << it << " ";
                        ds.unionBySize(i, it);
                    }
                }
                // cout << nl;
            }
        }
        // cout << ds.findPar(1) << nl;
        ll parent = 0;
        for (int i = 1; i <= n; i++) {
            if (ds.findPar(i) == i) {
                parent++;
            }
        }
        mp2 = mp;
        ans = max(ans, parent - 2);
    }

    cout << ans << nl;
    // cout << parent - 2 << nl;
    // cout << st.size() << nl;


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