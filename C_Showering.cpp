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
    ll n, s, m;
    cin >> n >> s >> m;
    vector<pair<ll, ll>> pr;
    pr.push_back({0, 0});
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        pr.push_back({l, r});
    }
    pr.push_back({m, m});
    sort (pr.begin(), pr.end());
    bool flag = false;
    for (int i = 0; i < pr.size() - 1; i++) {
        ll st = pr[i].second;
        ll end = pr[i + 1].first;
        ll diff = end - st;
        if (diff >= s) {
            flag = true;
            break;
        }
    }
    if (flag) YES;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}