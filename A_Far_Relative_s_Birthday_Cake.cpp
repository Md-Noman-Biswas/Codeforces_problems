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
    ll n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }   
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'C') cnt++;
        }
        if (cnt == 0) continue;
        ll pr = (cnt * (cnt - 1)) / 2;
        ans += pr;
    } 

    for (int j = 0; j < n; j++) {
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i][j] == 'C') cnt++;
        }
        if (cnt == 0) continue;
        ll pr = (cnt * (cnt - 1)) / 2;
        ans += pr;
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
    solve();
    return 0;
}