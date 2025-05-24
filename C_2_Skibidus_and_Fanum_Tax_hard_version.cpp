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


bool yoo(ll mid, ll target, ll prev, vector<ll> &brr) {
    return brr[mid] - target >= prev;
}


void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n), brr(m);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < m; i++) cin >> brr[i];
    
    sort(brr.begin(), brr.end());

    for (int i = 0; i < m; i++) {
        arr[0] = min(arr[0], brr[i] - arr[0]);
    }

    // cout << arr[0] << nl;
    for (int i = 1; i < n; i++) {
        ll l = 0, r = m - 1;
        ll xd = -1;
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            // cout << mid << nl;
            if (yoo(mid, arr[i], arr[i - 1], brr)) {
                xd = brr[mid];
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        // cout << xd << " " << xd - arr[i] << nl;
        ll mn = llmx, mx = llmn;
        mn = min(xd - arr[i], arr[i]);
        mx = max(xd - arr[i], arr[i]);

        // cout << mn << " " << mx << nl;
        if (mn < arr[i - 1]) {
            if (mx < arr[i - 1]) {
                NO;
                return;
            }
            else {
                arr[i] = mx;
            }
        }
        else {
            arr[i] = mn;
        }
    }
    // for (auto it: arr) cout << it << " ";
    // cout << nl;
    YES;
    
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