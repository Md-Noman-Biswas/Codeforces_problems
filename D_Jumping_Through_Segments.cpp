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


bool predicate(ll mid, vector<pair<ll, ll>>& pr) {
    ll curr_l = 0;
    ll curr_r = mid;
    for (int i = 0; i < pr.size(); i++) {
        if (curr_r < pr[i].first || curr_l > pr[i].second) {
            return false;
        }
        curr_l = max(curr_l, pr[i].first);
        curr_r = min(curr_r, pr[i].second);
        curr_l = max(0LL, curr_l - mid);
        curr_r = curr_r + mid;
    }
    return true;
}


void solve(){
    ll n;
    cin >> n;
    ll q = n;
    vector<pair<ll, ll>> pr;
    while (q--) {
        ll x, y;
        cin >> x >> y;
        pr.push_back({x, y});
    }   

    ll l = 0, r = 1e9;
    ll ans = r;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (predicate(mid, pr)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
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