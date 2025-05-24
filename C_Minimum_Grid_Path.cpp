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
    vector<ll> arr(n);
    ll mn_ind = -1;
    ll mn = llmx;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < mn) {
            mn_ind = i;
            mn = arr[i];
        }
    }
    // cout << mn << nl;
    mn_ind = max(mn_ind, 1LL);
    vector<ll> even, odd;
    for (int i = 0; i <= mn_ind; i++) {
        if (i % 2 == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll mn_even = llmx, mn_odd = llmx;
    ll sum_even = 0, sum_odd = 0;
    ll cnt_even = 0, cnt_odd = 0;
    ll ans = llmx;
    for (int i = 0; i < n; i++) {
        ll cost1 = 0, cost2 = 0;
        if (i % 2 == 0) {
            cnt_even++;
            mn_even = min(mn_even, arr[i]);
            sum_even += arr[i];
        }
        else {
            cnt_odd++;
            mn_odd = min(mn_odd, arr[i]);
            sum_odd += arr[i];
        }
        
        if (i < 1) continue;
        cost1 = sum_even - mn_even;
        cost2 = sum_odd - mn_odd;
        cost1 += mn_even * (n - cnt_even + 1);
        cost2 += mn_odd * (n - cnt_odd + 1);
        ans = min(ans, cost1 + cost2);

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