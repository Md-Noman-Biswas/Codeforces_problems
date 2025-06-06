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
    ll a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    ll mn = n - (a1 * (k1 - 1) + a2 * (k2 - 1));
    if (mn < 0) mn = 0;
    cout << mn << " ";
    ll mx = 0;
    ll temp_n = n;
    ll temp_a1 = a1;
    if (k1 < k2) {
        while (temp_n - k1 >= 0 && a1 > 0) {
            temp_n -= k1;
            a1--;
            mx++;
        }
        mx += min((temp_n / k2), a2);
    }
    else {
        while (temp_n - k2 >= 0 && a2 > 0) {
            a2--;
            mx++;
            temp_n -= k2;
        }
        mx += min((temp_n / k1), a1);
    }
    cout << mx << nl;
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