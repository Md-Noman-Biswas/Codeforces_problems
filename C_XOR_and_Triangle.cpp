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

// if((a & (1<<i)) != 0){//1000
//         cout << "set bit" << "\n";
//     }else{
//         cout << "not set bit" << "\n";
//     }

bool valid(ll x, ll y, ll z) {
    if ((x + y > z) && (y + z > x) && (x + z > y)) return true;
    else return false;
}

void solve(){
    ll n;
    cin >> n;
    ll x = n;
    ll last_set_bit_position = -1;
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i))) {
            last_set_bit_position = i;
            break;
        }
    }
    // cout << last_set_bit_position << nl;

    ll y = pow(2, last_set_bit_position) - 1;
    // cout << y << nl;
    ll z = x ^ y;
    // cout << z << nl;
    if (valid(x, y, z)) {
        cout << y << nl;
    }
    else {
        cout << -1 << nl;
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