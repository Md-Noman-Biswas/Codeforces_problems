#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    string s;
    cin >> s;
    string trim;
    ll n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'b') trim.push_back(s[i]);
    }
    // cout << trim << nl;

    vector<ll> segs;

    ll cnt = 0;
    for (int i = 0; i < trim.size(); i++) {
        if (trim[i] == 'a') {
            cnt++;
        }
        else {
            if (cnt == 0) continue;
            segs.push_back(cnt);
            cnt = 0;
        }
    }
    if (cnt) segs.push_back(cnt);
    // for (auto it: segs) cout << it << " ";

    ll ans = 1;
    for (int i = 0; i < segs.size(); i++) {
        ans = (ans * (segs[i] + 1)) % mod;
    }
    --ans;
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
    solve();
    return 0;
}