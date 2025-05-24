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

bool check(ll n) {
    ll temp = n;
    while (temp) {
        ll digit = temp % 10;
        temp /= 10;
        if (digit == 7) return true;
    }
    return false;
}

void solve(){
    ll n;
    cin >> n;
    if (check(n)) {
        cout << 0 << nl;
        return;
    }
    vector<ll> v = {9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999};
    vector<ll> nums(v.size());
    ll xd = n;
    // for (int i = 1; i <= 10; i++) {
    //     for (int i = 0; i < v.size(); i++) {
    //         cout << xd + v[i] << nl;
    //     }
    // }
    ll ans = llmx;
    for (int i = 0; i < v.size(); i++) {
        bool flag = false;
        for (int j = 1; j <= 10; j++) {
            if (check(n + j * v[i])) {
                ans = min(ans, j * 1LL);
                break;
            }
        }
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}