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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }   
    vector<pair<ll, ll>> pr;
    ll cnt = 0;
    for (auto it: mp) {
        pr.push_back({it.second, it.first});
    }
    sort(pr.begin(), pr.end(), cmp);
    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    // cout << nl;
    ll last = pr[0].first;
    cnt = pr[0].first;
    for (int i = 1; i < pr.size(); i++) {
        // cout << last << nl;
        if (last <= 0) break;
        if (last != pr[i].first) {
            cnt += min(pr[i].first, last - 1);
            last = min(pr[i].first, last - 1);
        }
        else {
            cnt += last - 1;
            last--;
        }
        // cout << cnt << " " << last << nl;
    }
    cout << cnt << nl;
    
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