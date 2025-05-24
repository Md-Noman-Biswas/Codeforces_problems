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
    vector<ll> xd;
    for (auto it: mp) {
        pr.push_back({it.second, it.first});
        xd.push_back(it.second);
    }

    ll len = xd.size();
    sort(pr.begin(), pr.end());
    sort(xd.begin(), xd.end());
    vector<ll> pref(xd.size());
    vector<ll> suff(xd.size());
    pref[0] = xd[0];
    for (int i = 1; i < len; i++) pref[i] = pref[i - 1] + xd[i];
    suff[len - 1] = xd[len - 1];
    for (int i = len - 2; i >= 0; i--) suff[i] = suff[i + 1] + xd[i];

    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    ll mx = pr.back().first + 1;
    ll ans = llmx;
    for (int i = 1; i <= mx; i++) {
        auto it = lower_bound(xd.begin(), xd.end(), i);
        if (it == xd.end()) {
            ans = min(ans, pref[len - 1]);
            continue;
        }
        ll ind = it - xd.begin();
        ll extra_left = 0;
        ll extra_right = 0;
        if (ind == 0) {
            extra_right = suff[ind] - (len - ind) * i; 
            ans = min(ans, extra_right);
            // cout << i << " " << ind << " " << extra_right << nl;
        }
        else {
            extra_left = pref[ind - 1];
            extra_right = suff[ind] - (len - ind) * i;
            ans = min(ans, extra_left + extra_right);
            // cout << i << " " << ind << " " << extra_left + extra_right << nl;
        }
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