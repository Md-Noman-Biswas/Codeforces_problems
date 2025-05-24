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
    ll ans = min(9LL, n);
    
    if (n < 100) ans += n / 10;
    else if (n < 1000) ans += 9 + n / 100;
    else if (n < 10000) ans += 9 + 9 + n / 1000;
    else if (n < 100000) ans += 9 + 9 + 9 + n / 10000;
    else if (n < 1000000) ans += 9 + 9 + 9 + 9 + n / 100000;
    // else if (n <= 1000000) ans += 9 + 9 + 9 + 9 + 9 + n / 1000000;
    
    cout << ans << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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