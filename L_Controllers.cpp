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
    ll n; cin >> n;
    string s; cin >> s;

    map<char, ll> mp;
    for (auto it: s) mp[it]++;
    ll q; cin >> q;

    while (q--) {
        ll u, v;
        cin >> u >> v;
        if (u > v) swap(u, v);
        if (mp['-'] == mp['+']) {
            YES;
            continue;
        }
        if (u == v) {
            NO;
            continue;
        }
        ll diff = mp['-'] - mp['+'];
        ll temp = (diff * v) % (u - v);
        if (temp != 0) {
            NO;
        }
        else {
            if ((diff * v) / (u - v) >= -mp['-'] && (diff * v) / (u - v) <= mp['+']) YES;
            else NO;
        }
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
    solve();
    return 0;
}