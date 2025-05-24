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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }   

    sort(arr.begin(), arr.end());
    // for (auto it: arr) cout << it << " ";
    // cout << nl;
    ll mx = arr[n - 1] + arr[n - 2];
    if (sum < l) {
        cout << 0 << nl;
        return;
    }
    if (sum - mx > r) {
        cout << 0 << nl;
        return;
    }

    ll total = 0;
    for (int i = 0; i < n; i++) {
        ll temp = sum - l - arr[i];
        auto itr = upper_bound(arr.begin(), arr.end(), temp);
        if (itr == arr.begin()) continue;
        itr--;
        ll idx = itr - arr.begin();
        if (idx >= i) idx--;
        total += (idx + 1);
        // cout << temp << " " << idx << nl;
    }

    // cout << total << nl;
    for (int i = 0; i < n; i++) {
        ll temp = sum - r - arr[i];
        auto itr = lower_bound(arr.begin(), arr.end(), temp);
        if (itr == arr.begin()) continue;
        ll idx = itr - arr.begin();
        // cout << temp << " " << idx << " ";
        if (idx >= i) idx--;
        total -= (idx);
        // cout << total << nl;
    }
    cout << total / 2 << nl;
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