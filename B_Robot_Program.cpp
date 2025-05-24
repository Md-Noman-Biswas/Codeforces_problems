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
    ll n, x, k;
    cin >> n >> x >> k; 
    string s;
    cin >> s;
    ll v = x;
    ll cnt = 0;
    ll ind = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            v--;
        }
        else {
            v++;
        }
        if (v == 0) {
            cnt++;
            ind = i;
            break;
        }
    } 

    v = 0;
    ll cnt2 = 0;
    ll ind2 = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') v--;
        if (s[i] == 'R') v++;
        if (v == 0) {
            cnt2++;
            ind2 = i;
            break;
        }
    }

    if (ind == -1) {
        cout << 0 << nl;
        return;
    } 

    if (ind2 == -1) {
        cout << 1 << nl;
        return;
    }

    // cout << ++ind << nl;
    // cout << ++ind2 << nl;
    // cout << cnt << ' ' << cnt2 << nl;
    ++ind;
    ++ind2;

    cout << 1 + ((k - ind) / ind2) << nl;
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