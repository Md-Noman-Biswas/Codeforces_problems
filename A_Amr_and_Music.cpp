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

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        pr.push_back({x, i});
    }   
    sort(pr.begin(), pr.end());

    vector<ll> ans;
    for (int i = 0; i < n; i++) {
        if (k <= 0) break;
        if (k - pr[i].first >= 0) {
            ans.push_back(++pr[i].second);
            k -= pr[i].first;
        }
    }

    cout << ans.size() << nl;
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
    solve();
    return 0;
}