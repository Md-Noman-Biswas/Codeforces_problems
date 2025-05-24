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

void solve(){
    ll n;
    cin >> n;

    vector<pair<ll, ll>> pr;
    set<ll> st, st2;
    vector<ll> adj[2];
    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        adj[y].push_back(x);
        if (y == 1) st.insert(x);
        if (y == 0) st2.insert(x);
        pr.push_back({x, y});
    }

    sort(adj[0].begin(), adj[0].end());
    sort(adj[1].begin(), adj[1].end());

    ll i = 0;
    ll j = 0;

    bool flag = false;
    ll cnt = 0;
    while (i < adj[0].size() && j < adj[1].size()) {
        if (adj[0][i] == adj[1][j]) {
            // cout << adj[0][i] << " " << adj[1][j] << nl;
            flag = true;
            cnt++;
            i++;
            j++;
        }
        else if (adj[0][i] > adj[1][j]) {
            j++;
        }
        else {
            i++;
        }
    }

    // cout << cnt << nl;

    ll ans = 0;
    //cout << ans << nl;

    auto it = st.end();
    ll mx;
    if (st.size() > 1) {
        --it;
        mx = *it;
    }
    else {
        mx = llmn;
    }

    if (flag) ans = cnt * (adj[0].size() - 1 + adj[1].size() - 1);
    // cout << ans << nl;
    if (!adj[0].empty()) {
        for (int i = 0; i < adj[0].size() - 1; i++) {
            for (int j = i + 1; j < adj[0].size(); j++) {
                ll diff = abs(adj[0][i] - adj[0][j]);
                if (diff / 2 > 1) break;
                if (diff % 2 != 0) continue;
                if ((diff / 2) == 1) {
                    ll xd = (adj[0][i] + adj[0][j]) / 2;
                    if (st.find(xd) != st.end()) {
                        ans++;
                    }
                }
            }
        }
    }
    // cout << ans << nl;
    
    if (!adj[1].empty()) {
        for (int i = 0; i < adj[1].size() - 1; i++) {
            for (int j = i + 1; j < adj[1].size(); j++) {
                ll diff = abs(adj[1][i] - adj[1][j]);
                if (diff / 2 > 1) break;
                if (diff % 2 != 0) continue;
                if ((diff / 2) == 1) {
                    ll xd = (adj[1][i] + adj[1][j]) / 2;
                    if (st2.find(xd) != st2.end()) {
                        ans++;
                    }
                }
            }
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}