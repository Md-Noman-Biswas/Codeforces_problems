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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n), brr(m);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < m; i++) cin >> brr[i];
    map<ll, ll> mp1, mp2;

    ll cons = 0;
    if (arr[0] == 1) cons++; 
    for (int i = 1; i < n; i++) {
        if (arr[i] == 1) {
            cons++;
        }
        else {
            for (int j = 1; j <= cons; j++) {
                mp1[j] += cons - j + 1;
            }
            cons = 0;
        }
    }
    if (cons) {
        for (int i = 1; i <= cons; i++) {
            mp1[i] += cons - i + 1;
        }
        cons = 0;
    }

    cons = 0;
    if (brr[0] == 1) cons++; 
    for (int i = 1; i < m; i++) {
        if (brr[i] == 1) {
            cons++;
        }
        else {
            for (int j = 1; j <= cons; j++) {
                mp2[j] += cons - j + 1;
            }
            cons = 0;
        }
    }
    if (cons) {
        for (int i = 1; i <= cons; i++) {
            mp2[i] += cons - i + 1;
        }
    }

    // for (auto it: mp2) cout << it.first << " " << it.second << nl;

    ll ans = 0;
    for (int i = 1; i <= sqrt(k); i++) {
        if (k % i == 0) {
            ll div1 = i;
            ll div2 = k / i;

            ans += mp1[div1] * mp2[div2];
            if (div1 != div2) {
                ans += mp1[div2] * mp2[div1];
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
    solve();
    return 0;
}