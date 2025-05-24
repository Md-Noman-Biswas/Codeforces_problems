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
    if (p1.second == p2.second) return p1.first < p2.first;
    return p1.second < p2.second;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, ll> mp;
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }  
    for (auto it: mp) pr.push_back({it.first, it.second});

    sort(pr.begin(), pr.end(), cmp);

    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    // cout << nl;

    for (int i = 0; i < pr.size(); i++) {
        if (k) {
            ll temp = min(pr[i].second, k);
            k -= temp;
            pr[i].second -= temp;
        }
        else {
            break;
        }
    }

    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    ll cnt = 0;
    for (auto it: pr) {
        if (it.second > 0) {
            cnt++;
        }
    }
    if (cnt) {
        cout << cnt << nl;
    }
    else {
        cout << 1 << nl;
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