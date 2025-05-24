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
    if (n == 1) {
        cout << 4 << nl;
        return;
    }
    if (n == 2) {
        cout << 4 << nl;
        return;
    }

    if (n % 2 == 0) {
        ll temp = 4;
        ll diff = 3;
        while (temp < n) {
            diff++;
            temp += 2;
        }
        cout << diff * diff << nl;
    }
    else {
        ll temp = 3;
        ll diff = 2;
        while (temp < n) {
            diff++;
            temp += 2;
        }
        cout << diff * (diff + 1) * 2 << nl;
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
    solve();
    return 0;
}