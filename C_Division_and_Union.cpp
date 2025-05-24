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

bool cmp(pair<ll, pair<ll, ll>> p1, pair<ll, pair<ll, ll>> p2) {
    if (p1.second.first == p2.second.first) return p1.first > p2.first;
    return p1.second.first < p2.second.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> pr(n);
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        pr[i].first = l;
        pr[i].second.first = r;
        pr[i].second.second = i;
    }   

    sort(pr.begin(), pr.end(), cmp);
    map<ll, ll> mp;

    // for (auto it: pr) cout << it.first << " " << it.second.first << " " << it.second.second << nl;
    bool flag = false;
    ll mn = pr[n - 1].first;
    for (int i = n - 1; i > 0; i--) {
        // cout << i << " -> " <<  mn << nl;
        mn = min(mn, pr[i].first);
        if (pr[i].second.first > pr[i - 1].second.first && mn > pr[i - 1].second.first) {
            // YES;
            mp[i] = 1;
            for (int j = 0; j < i; j++) mp[pr[j].second.second] = 1;
            for (int j = i; j < n; j++) mp[pr[j].second.second] = 2;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << -1 << nl;
    }
    else {
        for (int i = 0; i < n; i++) cout << mp[i] << " ";
        cout << nl;
    }
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