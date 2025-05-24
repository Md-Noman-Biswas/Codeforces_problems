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
    string s;
    cin >> s;
    vector<ll> ans(n);
    ll v1 = n;
    ll v2 = 1;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '>') {
            // cout << i << nl;
            ans[i + 1] = v1;
            v1--;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '<') {
            ans[i + 1] = v2;
            v2++;
        }
    }
    ans[0] = v1;

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