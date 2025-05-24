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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    return p1.second < p2.second;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> pr(n);

    for (int i = 0; i < n; i++) {
        cin >> pr[i].first >> pr[i].second;
    }

    sort(pr.begin(), pr.end());

    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    ll cnt1 = 0, cnt2 = 0;
    if (n % 2 != 0) {
        cnt1 = 1;
        cnt2 = 1;
    }
    else {
        cnt1 = pr[(n / 2)].first - pr[(n / 2) - 1].first + 1;
        sort(pr.begin(), pr.end(), cmp);
        // for (auto it: pr) cout << it.first << " " << it.second << nl;
        cnt2 = pr[(n / 2)].second - pr[(n / 2) - 1].second + 1;
    }

    cout << cnt1 * cnt2 << nl;
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