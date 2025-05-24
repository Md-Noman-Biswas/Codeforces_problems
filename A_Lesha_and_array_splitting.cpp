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
    vector<ll> arr(n);
    vector<vector<ll>> ans;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum != 0) {
        YES;
        cout << 1 << nl;
        cout << 1 << " " << n << nl;
        return;
    }
    vector<ll> pref(n, 0);
    pref[0] = arr[0];
    for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];

    for (int i = 0; i < n; i++) {
        if ((pref[i] != 0) && (pref[n - 1] - pref[i]) != 0) {
            YES;
            cout << 2 << nl;
            cout << 1 << " " << (i + 1) << nl;
            cout << i + 2 << " " << n << nl;
            return;
        }
    } 
    NO;
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