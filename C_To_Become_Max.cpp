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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    ll l = mx, r = mx + k;

    ll ans = mx;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            ll pivot = mid;
            ll cost = 0;
            for (int j = i; j < n; j++) {
                if (j == n - 1) {
                    if (pivot - arr[j] > 0) {
                        cost = INF;
                    }
                }
                if (pivot - arr[j] <= 0) break;
                cost += pivot - arr[j];
                pivot--;
            }
            // cout << i << ' ' << mid << " " << cost << nl;
            if (cost <= k) {
                flag = true;
                break;
            }
        }

        if (flag) {
            l = mid + 1;
            ans = mid;
        }
        else {
            r = mid - 1;
        }
    }
    cout << ans << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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