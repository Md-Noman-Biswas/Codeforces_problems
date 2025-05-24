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
    ll n, m;
    cin >> n >> m;   
    ll two = 0;
    ll five = 0;
    ll digit = n;
    while (digit % 2 == 0) {
        digit /= 2;
        two++;
    }
    while (digit % 5 == 0) {
        digit /= 5;
        five++;
    }

    ll ans = 1;
    if (two < five) {
        while (two != five) {
            if (ans * 2 <= m) {
                ans *= 2;
                two++;
            }
            else {
                break;
            }
        }
    }
    else {
        while (two != five) {
            if (ans * 5 <= m) {
                ans *= 5;
                five++;
            }
            else {
                break;
            }
        }
    }

    while (ans * 10 <= m) ans *= 10;

    ll rem = m / ans;
    ans *= rem;

    cout << ans * n << nl;
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