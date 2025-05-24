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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll temp = n / (a + b + c);

    ll total_days = temp * 3;
    ll rem = n % (a + b + c);
    // cout << rem << nl;
    if (rem > 0) {
        rem -= a;
        total_days++;
    }
    if (rem > 0) {
        rem -= b;
        total_days++;
    }
    if (rem > 0) {
        rem -= c;
        total_days++;
    }
    cout << total_days << nl;
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