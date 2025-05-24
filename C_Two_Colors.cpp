#include <bits/stdc++.h>
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

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        if (arr[i] == n) arr[i]--;
    }

    sort(arr.begin(), arr.end());

    vector<ll> pref(m, 0), suff(m, 0);
    
    pref[0] = arr[0];
    for (int i = 1; i < m; i++) pref[i] = pref[i - 1] + arr[i];

    suff[m - 1] = arr[m - 1];
    for (int i = m - 2; i >= 0; i--) suff[i] = suff[i + 1] + arr[i];

    ll cnt = 0;
    for (int i = 0; i < m; i++) {
        ll temp = n - arr[i];
        // if (temp == 0) temp = 1;
        ll ind = lower_bound(arr.begin() + i + 1, arr.end(), temp) - arr.begin();
        if (ind < m) {
            cnt += suff[ind] - temp * (m - ind) + (m - ind);
        }
    }

    cout << cnt * 2 << nl;
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

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
