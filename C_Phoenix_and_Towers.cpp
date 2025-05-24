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
    ll n, m, x;
    cin >> n >> m >> x;
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        ll v;
        cin >> v;
        pr.push_back({v, i});
    }    
    sort(pr.begin(), pr.end());

    // for (auto it: pr) cout << it.first << " ";
    vector<ll> ans(n, 0);
    vector<ll> sizes(m);
    ll k = 1;
    for (int i = 0; i < n; i++) {
        if (k > m) k = 1;
        ans[pr[i].second] = k;
        sizes[k - 1] += pr[i].first;
        k++;
    }
    ll diff = 0;
    sort(sizes.begin(), sizes.end());
    if (sizes.back() - sizes.front() > x) {
        NO;
        return;
    }
    YES;
    for (auto it: ans) cout << it << " ";
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