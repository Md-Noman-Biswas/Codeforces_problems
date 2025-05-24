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

map<ll, pair<ll, ll>> dp;
ll n, k;

pair<ll, ll> build(ll l, ll r) {
    ll len = r - l + 1;

    if (len < k) return {0, 0};
    if (dp.find(len) != dp.end()) {
        return make_pair(dp[len].first + dp[len].second * (l - 1), dp[len].second);
    }
    
    if (len % 2 != 0) {
        if (len != 1) {
            auto left = build(l, l + (len / 2) - 1);
            auto right = build(l + (len / 2) + 1, r);
            pair<ll, ll> current_ans = make_pair(left.first + right.first + (l + r) / 2, left.second + right.second + 1);
            return dp[len] = current_ans;
        }
        else {
            return dp[1] = {l, 1};
        }
    }
    else {
        auto left = build(l, l + (len / 2) - 1);
        auto right = build(l + (len / 2), r);
        pair<ll, ll> current_ans = make_pair(left.first + right.first, left.second + right.second);
        return dp[len] = current_ans;
    }
}

void solve(){
    cin >> n >> k;
    auto ans = build(1, n);
    cout << ans.first << nl;
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
        dp.clear();
        solve();
    }
    return 0;
}