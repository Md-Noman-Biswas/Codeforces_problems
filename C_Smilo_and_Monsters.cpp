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
    ll n; cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    

    ll l = 0, r = n - 1;
    ll power = 0;
    ll cnt = 0;

    vector<ll> killed(n, 0);
    while (l < r) {
        if (power + arr[l] < arr[r]) {
            power += arr[l];
            cnt += arr[l];
            arr[l] = 0;
            l++;
        }
        else {
            cnt += arr[r] - power;
            cnt++;
            arr[l] -= (arr[r] - power);
            r--;
            power = 0;
        }
    }
    // cout << arr[r] << nl;
    if (arr[r] == 0) {
        cout << cnt << nl;
    }
    else {
        if (arr[r] == 1) {
            cout << cnt + 1 << nl;
        }
        else {
            cout << cnt + int(ceil((arr[r] - power) / 2.0)) + 1 << nl;
        }
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