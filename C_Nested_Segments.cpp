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

bool cmp(pair<ll, pair<ll, ll>> p1, pair<ll, pair<ll, ll>> p2) {
    if (p1.second.first == p2.second.first) return p1.first > p2.first;
    return p1.second.first < p2.second.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> pr;
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        pr.push_back({l, {r, i}});
    }

    sort(pr.begin(), pr.end(), cmp);
    // for (auto it: pr) {
    //     cout << it.first << " " << it.second.first << " " << it.second.second << nl;
    // }

    ll mn = pr[n - 1].first;
    ll mn_ind = pr[n - 1].second.second;
    for (int i = n - 2; i >= 0; i--) {
        if (pr[i].first >= mn) {
            cout << ++pr[i].second.second << " " << ++mn_ind << nl;
            return;
        }
        if (pr[i].first < mn) {
            mn = pr[i].first;
            mn_ind = pr[i].second.second;
        }
    }

    cout << -1 << " " << -1 << nl;
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