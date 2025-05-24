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

ll distance2(ll x1, ll y1, ll x2, ll y2) {
    ll t1 = abs(x1 - x2);
    ll t2 = abs(y1 - y2);
    t1 *= t1;
    t2 *= t2;
    ll temp = t1 + t2;
    return temp;
}


void solve(){
    ll n;
    cin >> n;
    ll temp = n;
    vector<pair<ll, ll>> pr;
    while (temp--) {
        ll x, y;
        cin >> x >> y;
        pr.push_back({x, y});
    }   
    ll s1, s2, e1, e2;
    cin >> s1 >> s2 >> e1 >> e2;
    ll mn = llmx;
    ll mn_0 = llmx;

    for (auto it: pr) {
        mn = min(mn, distance2(it.first, it.second, e1, e2));
    }
    ll dist = distance2(s1, s2, e1, e2);
    if (mn > dist) {
        YES;
    }
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