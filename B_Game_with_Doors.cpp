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
    ll l, r;
    cin >> l >> r;
    ll L, R;
    cin >> L >> R;
    if (l == L && r == R) {
        cout << r - l << nl;
        return;
    }
    vector<ll> alice(101, 0);
    vector<ll> bob(101, 0);

    vector<ll> intersect(101, 0);

    for (int i = l; i <= r; i++) {
        alice[i] = 1;
    }   

    for (int i = L; i <= R; i++) {
        bob[i] = 1;
    }

    for (int i = 1; i <= 100; i++) {
        intersect[i] = alice[i] * bob[i];
    }

    ll cnt = count(intersect.begin(), intersect.end(), 1);
    if (cnt == 0) {
        cout << 1 << nl;
        return;
    }

    if (l == L || r == R) {
        cout << cnt << nl;
    }
    else{
         cout << cnt + 1 << nl;
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