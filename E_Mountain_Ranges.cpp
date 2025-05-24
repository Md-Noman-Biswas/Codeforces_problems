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

ll pre(ll mid, vector<ll> &arr) {
    ll seg = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        if (abs(arr[i] - arr[i + 1]) > mid) {
            seg++;
        }
    }
    seg++;
    return seg;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    ll l = 1; 
    ll r = 1e9;
    ll ans = -1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll cnt = pre(mid, arr);
        if (cnt > m) {
            l = mid + 1;
        } 
        else {
            ans = mid;
            r = mid - 1;
        }
    }

    if (pre(ans, arr) == m) {
        cout << ans << nl;
    }
    else {
        cout << -1 << nl;
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
    solve();
    return 0;
}