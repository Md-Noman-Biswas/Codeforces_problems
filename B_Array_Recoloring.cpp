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
    ll mx_ind = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > mx) {
            mx = arr[i];
            mx_ind = i;
        }
    }
    ll cnt = 0;
    if (k == 1) {
        ll mxx = -1;
        if (mx_ind != 0 && mx_ind != n - 1) {
            cnt += mx;
            mxx = max(arr[0], mxx);
            mxx = max(arr[n - 1], mxx);
            cnt += mxx;
        }
        else {
            sort(arr.begin(), arr.end());
            for (int i = n - 1; i >= n - k - 1; i--) {
                cnt += arr[i];
            }
        }
    }
    else {
        sort(arr.begin(), arr.end());

        for (int i = n - 1; i >= n - k - 1; i--) {
            cnt += arr[i];
        }
    }

    cout << cnt << nl;
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