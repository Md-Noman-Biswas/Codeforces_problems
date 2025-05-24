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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        arr[i] = pow(10, x);
    }
    k++;

    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ll req = arr[i + 1] / arr[i];
        if (arr[i + 1] % arr[i] == 0) {
            req = arr[i + 1] / arr[i] - 1;
        }
        else {
            req = arr[i + 1] / arr[i];
        }
        if (req >= k) {
            ans += k * arr[i];
            k = 0;
            break;
        }
        else {
            ans += req * arr[i];
            k -= req;
        }
    }
    if (k) ans += k * arr[n - 1];
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}