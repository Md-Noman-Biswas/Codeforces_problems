#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1500;


vector<vector<ll>> arr(N, vector<ll> (N, 0)); 
vector<ll> ans(2e6 + 2, 0);
void pre() {
    ll curr = 1;
    for (int i = 1; i < 1500; i++) {
        for (int j = i - 1; j >= 1; j--) {
            arr[j][i - j] = arr[j - 1][i - j] + arr[j][i - j - 1] - arr[j - 1][i - j - 1] + curr * curr;
            ans[curr] = arr[j][i - j];
            curr++;
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    cout << ans[n] << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    pre();
    while (t--) {
        solve();
    }
    return 0;
}