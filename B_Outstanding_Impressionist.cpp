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
    vector<pair<ll, ll>> v;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
        if (x == y) mp[x]++;
    }   
    vector<ll> hsh(2 * n + 1, 0);
    for (auto it: mp) {
        hsh[it.first]++;
    }
    for (int i = 1; i <= 2 * n; i++) {
        hsh[i] += hsh[i - 1];
    }
    // for (auto it: hsh) cout << it << " ";
    // cout << nl;
    // for (auto it: mp) cout << it.first << " " << it.second << nl;
    for (int i = 0; i < n; i++) {
        if (mp[v[i].first] == 0 || mp[v[i].second] == 0) {
            cout << 1;
        }
        else if ((v[i].first == v[i].second) && mp[v[i].first] == 1) {
            cout << 1;
        }
        else if (v[i].second - v[i].first + 1 > mp.size()) {
            cout << 1;
        }
        else {
            bool flag = false;
            ll sz = v[i].second - v[i].first + 1;
            ll good = sz - (hsh[v[i].second] - hsh[v[i].first - 1]);
            if (good > 0) cout << 1;
            else cout << 0;
        }
    }
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