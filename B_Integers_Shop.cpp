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
    ll n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll> (3));
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    ll mn = INF, mx = -INF;
    ll mn_cost = -1, mx_cost = -1;
    ll longest_len = -1, longest_len_Cost = INF;

    for (int i = 0; i < n; i++) {
        if (arr[i][0] < mn) {
            mn = arr[i][0];
            mn_cost = arr[i][2];
        }
        else if (arr[i][0] == mn) {
            mn_cost = min(mn_cost, arr[i][2]);
        }

        if (arr[i][1] > mx) {
            mx = arr[i][1];
            mx_cost = arr[i][2];
        }
        else if (arr[i][1] == mx) {
            mx_cost = min(mx_cost, arr[i][2]);
        }

        ll len = arr[i][1] - arr[i][0] + 1;
        if (len > longest_len) {
            longest_len = len;
            longest_len_Cost = arr[i][2];
        }
        else if (len == longest_len) {
            longest_len_Cost = min(longest_len_Cost, arr[i][2]);
        }

        ll ans = mx_cost + mn_cost;
        if (longest_len == mx - mn + 1) {
            ans = min(ans, longest_len_Cost);
        }
        cout << ans << nl;
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