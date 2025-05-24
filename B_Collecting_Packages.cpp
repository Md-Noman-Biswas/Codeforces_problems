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
    ll n, q;
    cin >> n;
    q = n;
    vector<pair<ll, ll>> pr;
    while (q--) {
        ll x, y;
        cin >> x >> y;
        pr.push_back({x, y});
    }
    sort(pr.begin(), pr.end(), cmp);
    // for (auto it: pr) {
    //     cout << it.first << " " << it.second << nl;
    // }
    string ans;
    ll curr_x = 0, curr_y = 0;
    bool flag = true;
    for (auto it: pr) {
        if (it.first < curr_x) {
            flag = false;
            break;
        }
        if (it.second < curr_y) {
            flag = false;
            break;
        }
        while (curr_x != it.first) {
            curr_x++;
            ans.push_back('R');
        }
        while (curr_y != it.second) {
            curr_y++;
            ans.push_back('U');
        }
    }
    if (!flag) NO;
    else {
        YES;
        cout << ans << nl;
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