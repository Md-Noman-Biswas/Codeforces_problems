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
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    vector<ll> diff(n + 1, 0);
    vector<ll> pref(n, 0);
    pref[0] = brr[0];
    for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + brr[i];

    vector<ll> answer(n, 0);
    for (int i = 0; i < n; i++) {
        ll l = i, r = n - 1;
        ll ans = -1;
        // if (i != 0) continue; 
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            ll range = 0;
            (i == 0) ? range = pref[mid] : range = pref[mid] - pref[i - 1];
            // cout <<l << " " << r <<  "->" <<  range << nl;
            if (range <= arr[i]) {
                l = mid + 1;
                ans = mid;
            }
            else {
                r = mid - 1;
            }
        }
        // cout << ans << nl;
        if (ans != -1) {
            ll temp = 0;
            i == 0 ? temp = pref[ans] : temp = pref[ans] - pref[i - 1]; 
            arr[i] -= temp;
            diff[i]++;
            diff[ans + 1]--;
            // cout << arr[i] << nl;
            if (arr[i] > 0) {
                if (ans + 1 < n) {
                    answer[ans + 1] += min(arr[i], brr[ans + 1]);
                }
            }
        }
        else {
            answer[i] += min(arr[i], brr[i]);
        }
    }
    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }

    // for (int i = 0; i < n; i++) cout << diff[i] << " ";
    // cout << nl;
    
    for (int i = 0; i < n; i++) cout << answer[i] + brr[i] * diff[i] << " ";
    cout << nl;
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