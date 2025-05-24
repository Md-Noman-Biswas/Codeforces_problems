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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
     return p1.first < p2.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> pr;
    
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        pr.push_back({l, 1});
        pr.push_back({r + 1, -1});
    }

    sort(pr.begin(), pr.end(), cmp);

    // for (auto it: pr) cout << it.first << " " << it.second << nl;


    ll cnt = 0;
    ll mx = llmn;
    for (int i = 0; i < 2 * n; i++) {
        cnt += pr[i].second;
        // cout << cnt << nl;
        mx = max(mx, cnt);
    }
    // cout << mx << nl;
    if (mx <= 2) YES;
    else NO;
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