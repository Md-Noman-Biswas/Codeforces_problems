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
    ll total_matches = ((n * (n - 1)) / 2);
    vector<ll> ans(total_matches, 0);
    ll max_win;
    map<ll, ll> mp;
    ll ind = 0;

    if (n % 2 != 0) {
        max_win = (n - 1) / 2;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {   
                if (mp[i] < max_win) {
                    ans[ind] = 1;
                    mp[i]++;
                }
                else {
                    ans[ind] = -1;
                    // ans.push_back(-1);
                    mp[j]++;
                }
                ind++;
            }
        }
    }
    else {
        max_win = (n - 2) / 2;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if ((j - i) == n / 2) {
                    ans[ind] = 0;
                }
                else if (mp[i] < max_win) {
                    ans[ind] = 1;
                    mp[i]++;
                }
                else {
                    ans[ind] = -1;
                    mp[j]++;
                }
                ind++;
            }
        }
    }

    for (auto it: ans) cout << it << " ";
    cout << nl;
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