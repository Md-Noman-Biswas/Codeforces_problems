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
    ll x, y, k;
    cin >> x >> y >> k;
    if (x == 0 && y == 0) {
        cout << 0 << nl;
        return;
    }
    ll xd = max(x, y);
    if (k >= xd) {
        if (xd == x && y == 0) {
            cout << 1 << nl;
        }
        else {
            cout << 2 << nl;
        }
        return;
    }
    ll mn;
    if (x <= y) mn = x;
    else mn = y;
    // cout << mn << nl;
    ll ans = 0;
    if (mn == x) {
        ll temp = x / k;
        ll nearest_div = temp * k;
        ans += (nearest_div / k) * 2;
        //cout << ans << nl;
        x -= nearest_div;
        y -= nearest_div;
    }   
    else {
        ll temp = y / k;
        ll nearest_div = temp * k;
        ans += (nearest_div / k) * 2;
        //cout << ans << nl;
        x -= nearest_div;
        y -= nearest_div;
    }
    // cout << x << " " << y << nl;

    ll x_move = ceil(x / (k * 1.0));
    ll y_move = ceil(y / (k * 1.0));
    // cout << x_move << " " << y_move << nl;
    if (y_move > x_move) {
        ans += y_move * 2;
    }
    else {
        ans += x_move * 2;
    }

    if (x_move > y_move) ans--;

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