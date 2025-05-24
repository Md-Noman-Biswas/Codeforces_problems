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


ll __lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}


void solve(){
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << ' ' << n / 2 << nl;
        return;
    }   

    ll x = 1, y = n - 1;
    ll lcm = llmx;
    for (int i = sqrt(n); i > 1; i--) {
        if (n % i == 0) {
            x = n / i;
        }
    }
    ll k = n / x;
    y = (k - 1) * x;
    cout << x << " " << y << nl;
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