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
const int N = 1007;
const int INF = 1e9 + 10;

int parent[N];
vector<ll> responses;

int ask(int x, int node) {
    cout << "?" << ' ' << x << ' ' << node << nl;
    ll xd;
    cin >> xd;
    return xd;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ans;
    int par = 1;
    for (int i = 2; i <= n; i++) {
        while (1) {
            int v = ask(par, i);
            if (v == par) {
                break;
            }
            par = v;
        }
        ans.push_back({i, par});
    }
    cout << "!" << " ";
    for (auto it: ans) cout << it.first << " " << it.second << " ";
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