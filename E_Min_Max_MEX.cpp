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

bool check(ll mid, vector<ll> &arr, ll k) {
    vector<ll> mp(mid + 1, 0);
    ll mex = 0;
    ll seg = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= mid) mp[arr[i]]++;
        while (mp[mex] > 0) {
            mex++;
        }
        if (mex >= mid) {
            for (int i = 0; i < mid + 1; i++) mp[i] = 0;
            mex = 0;
            seg++;
        }
        if (seg >= k) return true;
    }
    return false;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll l = 0, r = n; 
    ll ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(mid, arr, k)) {
            ans = mid;
            l = mid + 1;
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