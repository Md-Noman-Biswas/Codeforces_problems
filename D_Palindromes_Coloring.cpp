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
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto it: s) mp[it]++;
    ll pr = 0;
    for (auto it: mp) {
        ll current_pr = it.second / 2;
        pr += current_pr;
        mp[it.first] = it.second - current_pr * 2;
    }   
    ll rem = 0;
    for (auto it: mp) {
        // cout << it.second << nl;
        rem += it.second;
    }
    // cout << rem << nl;
    // cout << pr << nl;
    ll lowest = (pr / k);
    pr -= (lowest * k);
    rem += pr * 2;
    // cout << rem << nl;
    ll ans = lowest * 2;
    if (rem >= k) {
        ans++;
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