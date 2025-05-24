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
const int N = 3e5 + 7;
const int INF = 1e9 + 10;

ll n;
vector<ll> arr(N);
vector<vector<ll>> dp(N, vector<ll> (3, -1));

ll f(ll ind, ll last) {
    if (ind >= n) return 0;

    if (dp[ind][last] != -1) return dp[ind][last];

    ll res = llmn;
    if (last == 0) {
        res = max(res, f(ind + 1, 0) + abs(arr[ind]));
        res = max(res, f(ind + 1, 1) + 2 * arr[ind]);
    }
    else if (last == 1) {
        res = max(res, f(ind + 1, 1) + 2 * arr[ind]);
        res = max(res, f(ind + 1, 2) + abs(arr[ind]));
    }
    else {
        res = max(res, f(ind + 1, 2) + abs(arr[ind]));
    }

    return dp[ind][last] = res;
}

void solve(){
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << f(0, 0) << nl;
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