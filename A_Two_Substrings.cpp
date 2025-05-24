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
    ll n = s.size();
    vector<ll> dp1(n, 0);
    vector<ll> dp2(n, 0);
    if (n < 2) {
        NO;
        return;
    }


    //check1
    if (s[0] == 'A' && s[1] == 'B') dp1[1] = 1;
    for (int i = 2; i < n; i++) {
        if (s[i] == 'B' && s[i - 1] == 'A') {
            dp1[i] = 1 + dp1[i - 2];
        }
        else {
            dp1[i] = dp1[i - 1];
        }
    }
    // cout << dp1[n - 1] << nl;
    if (s[n - 1] == 'A' && s[n - 2] == 'B') dp2[n - 2] = 1;
    for (int i = n - 3; i >= 0; i--) {
        if (s[i] == 'B' && s[i + 1] == 'A') {
            dp2[i] = 1 + dp2[i + 2];
        }
        else {
            dp2[i] = dp2[i + 1];
        }
    }
    for (int i = 1; i < n - 1; i++) {
        if (dp1[i] * dp2[i + 1] > 0) {
            YES;
            return;
        }
    }


    //check2
    vector<ll> dp3(n, 0);
    vector<ll> dp4(n, 0);
    if (s[0] == 'B' && s[1] == 'A') dp3[1] = 1;
    for (int i = 2; i < n; i++) {
        if (s[i] == 'A' && s[i - 1] == 'B') {
            dp3[i] = 1 + dp3[i - 2];
        }
        else {
            dp3[i] = dp3[i - 1];
        }
    }
    // cout << dp1[n - 1] << nl;
    if (s[n - 1] == 'B' && s[n - 2] == 'A') dp4[n - 2] = 1;
    for (int i = n - 3; i >= 0; i--) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            dp4[i] = 1 + dp4[i + 2];
        }
        else {
            dp4[i] = dp4[i + 1];
        }
    }

    // for (int i = 0; i < n ; i++) {
    //     cout << dp3[i] << " " << dp4[i] << nl;
    // }
    
    for (int i = 1; i < n - 1; i++) {
        if (dp3[i] * dp4[i + 1] > 0) {
            YES;
            return;
        }
    }

    NO;
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