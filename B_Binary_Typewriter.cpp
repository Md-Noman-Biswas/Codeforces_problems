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
    
    ll cost = 0;
    bool flag_0 = false;
    bool flag_1 = false;

    ll seg = 0;
    for (int i = 0; i < n; ) {
        if (s[i] == '0') {
            seg++;
            while (s[i] == '0') i++;
        }
        else {
            seg++;
            while (s[i] == '1') i++;
        }
    }
    if (s[0] == '0') seg--;
    // cout << seg << nl;

    if (seg == 0) {
        cout << n << nl;
    }
    else if (seg == 1) {
        cout << n + 1 << nl;
    }
    else if (seg == 2) {
        cout << n + seg - 1 << nl;
    }
    else {
        cout << n + seg - 2 << nl;
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