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
    ll n, x;
    cin >> n >> x;

    if (n == 1 && x == 0) {
        cout << -1 << nl;
        return;
    }
    
    bool first_bit = ((x & (1 << 0)) == 1);
    // cout << first_bit << nl;

    if (x == 0) {
        if (n % 2 == 0) {
            cout << n << nl;
        }
        else {
            cout << (n - 1) + 4 << nl;
        }
        return;
    }

    ll ans = x;

    ll set_bit = 0;
    for (int i = 0; i < 32; i++) {
        if ((x & (1 << i))) {
            set_bit++;
        }
    }
    // cout << set_bit << nl;

    if (set_bit >= n) {
        cout << x << nl;
        return;
    }

    ll pivot = n - 1;
    if (pivot % 2 != 0) pivot--;

    if (first_bit == 1) {
        if ((n - 1) % 2 == 0) {
            if (ans == 0) {
                ans += 4;
                ans += n - 1;
            }
            else {
                ans += n - 1;
                if ((set_bit - 1) % 2 == 0) {
                    ans -= min(set_bit - 1, pivot);
                }
                else {
                    ans -= min(set_bit - 2, pivot);
                }
            }
        }
        else {
            ans--;
            if (ans == 0) {
                ans += n - 1;
                ans += 4;
            }
            else {
                ans += n - 1;
                if ((set_bit - 2) % 2 == 0) {
                    ans -= min(set_bit - 2, pivot);
                }
                else {
                    ans -= min(set_bit - 3, pivot);
                }
            }
        }
    }
    else {
        if ((n - 1) % 2 == 0) {
            ans += n - 1;
            if ((set_bit - 1) % 2 == 0) {
                ans -= min(set_bit - 1, pivot);
            }
            else {
                ans -= min(set_bit - 2, pivot);
            }
        }
        else {
            ans++;
            ans += n - 1;
            if (set_bit % 2 == 0) {
                ans -= min(set_bit, pivot);
            }
            else {
                ans -= min(set_bit - 1, pivot);
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