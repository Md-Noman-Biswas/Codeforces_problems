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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    return p1.first > p2.first;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> pr(m);
    map<ll, ll> mp;
    vector<pair<ll, ll>> trim;
    for (int i = 0; i < m; i++) {
        cin >> pr[i].first;
        cin >> pr[i].second;
        mp[pr[i].first] += pr[i].second; 
    }   
    sort(pr.begin(), pr.end(), cmp);

    for (auto it: mp) {
        trim.push_back({it.second, it.first});
    }


    sort(trim.begin(), trim.end(), cmp);

    // for (auto it: trim) cout << it.first << " " << it.second << nl;

    ll sum = 0;
    for (int i = 0; i < trim.size(); i++) {
        if (n == 0) break;
        sum += trim[i].first;
        n--;
    }
    cout << sum << nl;
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