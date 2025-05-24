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

ll distance(ll x1, ll y1, ll x2, ll y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

bool cmp(pair<pair<ll, ll>, ll> p1, pair<pair<ll, ll>, ll> p2){
    if(p1.first.first == p2.first.first) return p1.first.second < p2.first.second;
    return p1.first.first < p2.first.first;
}

void solve(){
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> v;
    set<pair<ll, ll>> major_city;
    for(int i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        if(i < k) major_city.insert({x, y});
        v.push_back({x, y});
    }
    pair<ll, ll> start = v[a - 1];
    pair<ll, ll> end = v[b - 1];
    ll distance1 = llmx; 
    for(auto it: major_city){
        ll temp = distance(start.first, start.second, it.first, it.second);
        distance1 = min(temp, distance1);
    }
    ll distance2 = llmx;
    for(auto it: major_city){
        ll temp = distance(end.first, end.second, it.first, it.second);
        distance2 = min(temp, distance2);
    }
    ll ans1 = llmx;
    if(!major_city.empty())ans1 = distance1 + distance2;
    ll ans2 = distance(start.first, start.second, end.first, end.second);
    cout << min(ans1, ans2) << nl;
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