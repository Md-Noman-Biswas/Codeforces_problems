#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    ll note1 = n / 100;
    n -= 100 * note1;
    // cout << n << nl;
    ll note2 = n / 20;
    n -= 20 * note2;
    // cout << n << nl;
    ll note3 = n / 10;
    n -= 10 * note3;
    ll note4 = n / 5;
    n -= 5 * note4;
    ll note5 = n / 1;
    n -= 1 * note5;

    cout << note1 + note2 + note3 + note4 + note5 << nl;
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