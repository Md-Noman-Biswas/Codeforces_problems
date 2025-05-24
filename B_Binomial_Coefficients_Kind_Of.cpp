#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define mod 1000000007
const int N = 1e3 + 7;

ll dp[N][N];

ll f(ll n, ll k) {
    if (k == 0 || k == n) return 1;
    if (dp[n][k] != -1) return dp[n][k];
    return dp[n][k] = (f(n, k - 1) + f(n - 1, k - 1)) % mod;
}


void solve() {
    memset(dp, -1, sizeof dp);
    int n;
    cin >> n;

    vector<ll> arr(n), brr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    

    for (int i = 0; i < n; i++) {
        int ni = arr[i], ki = brr[i];
        cout << f(ni, ki) << nl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
