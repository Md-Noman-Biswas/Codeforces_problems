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

vector<ll> fact(16);

void init() {
    fact[0] = 1;
    for (int i = 1; i < 16; i++) {
        fact[i] = fact[i - 1] * i;
    }
}

ll set_bit(ll n) {
    ll cnt = 0;
    for (int i = 0; i < 64; i++) {
        if ((n & (1LL << i))) {
            cnt++;
        }
    }
    return cnt;
}

ll n;

ll f(ll ind, ll sum, ll cnt) {
    if (sum > n) return llmx;
    if (ind == 15) return cnt + set_bit(n - sum);

    ll way1 = f(ind + 1, sum, cnt);
    ll way2 = f(ind + 1, sum + fact[ind], cnt + 1);

    return min(way1, way2);
}

void solve(){
    cin >> n;
    cout << f(1, 0, 0) << nl;
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
    init();
    while(t--) {
        solve();
    }
    return 0;
}