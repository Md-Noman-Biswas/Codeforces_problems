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

vector<ll> component;

void dfs(ll node, vector<set<ll>> &edges, vector<ll> &vis) {
    vis[node] = 1;
    component.push_back(node);
    for (auto it: edges[node]) {
        if (!vis[it]) {
            dfs(it, edges, vis);
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    // vector<ll> edges[n + 1];
    vector<set<ll>> edges(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        edges[i].insert(arr[i]);
        edges[arr[i]].insert(i);
    }   

    // for (int i = 1; i <= n; i++) {
    //     cout << i << "->";
    //     for (auto it: edges[i]) cout << it << " ";
    //     cout << nl;
    // }


    vector<ll> vis(n + 1, 0);
    ll bamboo = 0;
    ll cycle = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            // cout << i << nl;
            dfs(i, edges, vis);
            bool flag = false;
            for (int k = 0; k < component.size(); k++) {
                if (edges[component[k]].size() == 1) {
                    flag = true;
                    break;
                }
            }
            if (flag) bamboo++;
            else cycle++;
            component.clear();
        }
    }

    // cout << bamboo << nl;
    // cout << cycle << nl;

    ll mx = bamboo + cycle;
    ll mn = cycle + min(bamboo, 1LL);

    cout << mn << " " << mx << nl;
    
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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