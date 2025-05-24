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


// if((a & (1<<i)) != 0){//1000
//         cout << "set bit" << "\n";
//     }else{
//         cout << "not set bit" << "\n";
//     }


void solve(){
    ll l, r;
    cin >> l >> r;
    ll d1 = l, d2 = 0, d3 = r;

    ll last_set_bit = -1;
    ll max_last_set_bit = -1;
    for (int i = 0; i < 32; i++) {
        if ((d1 & (1 << i)) != 0) {
            last_set_bit = i;
        }
    }
    max_last_set_bit = max(last_set_bit, max_last_set_bit);

    for (int i = 0; i < 32; i++) {
        if ((d3 & (1 << i)) != 0) {
            last_set_bit = i;
        }
    }
    max_last_set_bit = max(last_set_bit, max_last_set_bit);
    bool flag = false;

    // cout << max_last_set_bit << nl;
    for (int i = max_last_set_bit; i >= 0; i--) {
        ll t1 = (d1 & (1 << i));
        // ll t2 = (b & (1 << i));
        ll t3 = (d3 & (1 << i));
        if (t1 != t3) {
            d1 |= (1 << i);
            d3 &= (~(1 << i));
            for (int j = i - 1; j >= 0; j--) {
                d1 &= (~(1 << j));
                // num = num & ~(1 << i);
            }
            for (int j = i - 1; j >= 0; j--) {
                d3 |= (1 << j);
            }
            break;
        }
    }
    for (int i = l; i <= r; i++) {
        if (d1 != i && d3 != i) {
            d2 = i;
            break;
        }
    }
    cout << d1 << " " << d2 << " " << d3 << nl;

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