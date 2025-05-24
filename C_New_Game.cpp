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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, ll> mp;
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (auto it: mp) {
        pr.push_back({it.first, it.second});
    }
    sort(pr.begin(), pr.end());

    ll max_sum = 0;
    ll l = 0;
    ll sz = pr.size();
    ll range = min(k, sz);
    for (l = 0; l < range; l++) {
        if (l > 0) if (pr[l].first - pr[l - 1].first > 1) break;
        max_sum += pr[l].second;
    }
    ll ans = max_sum;
    ll cnt = l;
    for (int i = l; i < pr.size(); i++) {
        if (pr[i].first - pr[i - 1].first > 1) {
            max_sum = pr[i].second;
            cnt = 1;
        }
        else {
            if (cnt >= k) max_sum -= pr[i - k].second;
            max_sum += pr[i].second;
            cnt++;
        }
        ans = max(ans, max_sum);
    }
    cout << ans << nl;
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