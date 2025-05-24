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
    ll n;
    cin >> n;
    ll ans = 1;
    vector<ll> fact(21);
    fact[0] = 1;
    for (ll i = 1; i <= 20; i++) {
        fact[i] = fact[i - 1] * i;
    }   

    ll r = n / 2;
    ans = ((fact[n] / fact[n - r]) / fact[r]);
    ans /= 2;
    ans *= fact[n / 2 - 1] * fact[n / 2 - 1];

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