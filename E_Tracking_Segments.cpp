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
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> segs;
    ll total_seg = k;
    
    while (k--) {
        ll l, r;
        cin >> l >> r;
        --l, --r;
        segs.push_back({l, r});
    }
    
    
    ll q;
    cin >> q;
    
    ll max_change = q;
    vector<ll> query;
    while (q--) {
        ll xd;
        cin >> xd;
        xd--;
        query.push_back(xd);
    }

    ll l = 1, r = max_change;
    ll ans = llmx;
    // cout << l << " " << q << nl;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        vector<ll> pref(n, 0);
        for (int i = 0; i < mid; i++) pref[query[i]]++;
        for (int i = 1; i < n; i++) pref[i] += pref[i - 1];

        bool flag = false;
        // cout << mid << "-> :" << nl;

        // for (auto it: pref) cout << it << " ";
        // cout<<nl;
        for (int i = 0; i < total_seg; i++) {
            ll left = segs[i].first, right = segs[i].second;
            ll one;
            left != 0 ? one = pref[right] - pref[left - 1] : one = pref[right];
            ll zero = right - left + 1 - one;
            // cout << left << " " << right << nl;
            // cout << zero << " " << one << nl;
            if (one > zero) {
                flag = true;
                break;
            }
        }

        // cout << nl;

        if (flag) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (ans == llmx) ans = -1;
    cout << ans << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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