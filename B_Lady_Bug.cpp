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
    string s1, s2;
    cin >> s1 >> s2;
    
    ll zero = 0, one = 0;
    bool flag = true;
    for (int i = 0; i < n; i += 2) {
        if (s1[i] == '1') one++;
    }

    for (int i = 1; i < n; i += 2) {
        if (s2[i] == '0') zero++;
    }

    if (one > zero) flag = false;

    // cout << zero << " " << one << nl;
    zero = 0;
    one = 0;

    for (int i = 1; i < n; i += 2) {
        if (s1[i] == '1') one++;
    }

    for (int i = 0; i < n; i += 2) {
        if (s2[i] == '0') zero++;
    }

    // cout << zero << " " << one << nl;
    if (zero < one) flag = false;
    if (flag) YES;
    else NO;
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