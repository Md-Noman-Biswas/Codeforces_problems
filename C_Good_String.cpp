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
    string s;
    cin >> s;
    ll n = s.size();
    map<char, ll> mp;
    for (auto it: s) mp[it]++;
    ll ans = llmx;
    for (auto it: mp) {
        ans = min(ans, n - it.second);
    }
    for (char i = '0'; i <= '9'; i++) {
        for (char j = '0'; j <= '9'; j++) {
            if (i == j) continue;
            string trim;
            bool flag = true;
            for (auto it: s) {
                if (flag) {
                    if (it == i) {
                        trim.push_back(i);
                        flag = false;
                    }
                }
                else {
                    if (it == j) {
                        trim.push_back(j);
                        flag = true;
                    }
                }
            }
            if (trim.size() % 2 != 0) trim.pop_back();
            ll z = n - trim.size();
            ans = min(ans, z);
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