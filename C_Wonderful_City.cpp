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
const long long INF = 1e15 + 10;

ll n;

ll f(ll i, ll last, vector<vector<ll>> &dp, vector<vector<ll>> &arr, vector<ll> &companyA, vector<ll> &companyB) {
    if (i == n) return 0;
    if (dp[i][last] != -1) return dp[i][last];

    ll res = INF;
    bool f1 = 0, f2 = 0;

    if (i == 0) {
        res = min(res, f(i + 1, 0, dp, arr, companyA, companyB));
        res = min(res, companyA[i] + f(i + 1, 1, dp, arr, companyA, companyB));
    }
    else {
        if (!last) {
            for (int j = 0; j < n; j++) {
                if (arr[i - 1][j] == arr[i][j]) f1 = 1;
                if (arr[i - 1][j] == arr[i][j] + 1) f2 = 1;
            }
        }
        else {
            for (int j = 0; j < n; j++) {
                if (arr[i - 1][j] + 1 == arr[i][j]) f1 = 1;
                if (arr[i - 1][j] + 1 == arr[i][j] + 1) f2 = 1;
            }
        }


        if (f1 == 0 && f2 == 0) res = min(res, min(f(i + 1, 0, dp, arr, companyA, companyB), companyA[i] + f(i + 1, 1, dp, arr, companyA, companyB)));
        else if (f1 == 0) res = min(res, f(i + 1, 0, dp, arr, companyA, companyB));
        else if (f2 == 0) res = min(res, companyA[i] + f(i + 1, 1, dp, arr, companyA, companyB));
    }

    return dp[i][last] = res;
}


ll ff(ll j, ll last, vector<vector<ll>> &dp2, vector<vector<ll>> &arr, vector<ll> &companyA, vector<ll> &companyB) {
    if (j == n) return 0;
    if (dp2[j][last] != -1) return dp2[j][last];

    ll res = INF;

    bool f1 = 0, f2 = 0;

    if (j == 0) {
        res = min(res, companyB[j] + ff(j + 1, 1, dp2, arr, companyA, companyB));
        res = min(res, ff(j + 1, 0, dp2, arr, companyA, companyB));
    }
    else {
        if (!last) {
            for (int i = 0; i < n; i++) {
                if (arr[i][j - 1] == arr[i][j]) f1 = 1;
                if (arr[i][j - 1] == arr[i][j] + 1) f2 = 1;
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                if (arr[i][j - 1] + 1 == arr[i][j]) f1 = 1;
                if (arr[i][j - 1] + 1 == arr[i][j] + 1) f2 = 1;
            }
        }

        if (f1 == 0 && f2 == 0) res = min(res, min(ff(j + 1, 0, dp2, arr, companyA, companyB), companyB[j] + ff(j + 1, 1, dp2, arr, companyA, companyB)));
        else if (f1 == 0) res = min(res, ff(j + 1, 0, dp2, arr, companyA, companyB));
        else if (f2 == 0) res = min(res, companyB[j] + ff(j + 1, 1, dp2, arr, companyA, companyB));
    }

    return dp2[j][last] = res;
}



void solve(){
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll> (n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }   

    vector<vector<ll>> dp(n, vector<ll> (2, -1));
    vector<vector<ll>> dp2(n, vector<ll> (2, -1));

    vector<ll> companyA(n), companyB(n);

    for (int i = 0; i < n; i++) cin >> companyA[i];
    for (int i = 0; i < n; i++) cin >> companyB[i];

    ll ans1 = min(f(0, 0, dp, arr, companyA, companyB), f(0, 1, dp, arr, companyA, companyB));
    ll ans2 = min(ff(0, 0, dp2, arr, companyA, companyB), ff(0, 1, dp2, arr, companyA, companyB));

    ll ans = ans1 + ans2;

    if (ans >= INF) cout << -1 << nl;
    else cout << ans << nl;

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