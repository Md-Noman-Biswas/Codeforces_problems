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


vector<ll> power(31);
vector<ll> pref_power(31);
void pre() {
    power[0] = 1;
    for (int i = 1; i < 31; i++) {
        power[i] = power[i - 1] * 2;
    }
}

void init() {
    pre();
    pref_power[0] = power[0];
    for (int i = 1; i < 31; i++) {
        pref_power[i] = pref_power[i - 1] + power[i];
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    if (is_sorted(arr.begin(), arr.end())) {
        cout << 0 << nl;
        return;
    }
    ll ind = 0;
    while (arr[ind] <= arr[ind + 1]) {
        ind++;
    }
    
    ll limit = arr[ind];
    ll mx = -1;
    for (int i = ind + 1; i < n; i++) {
        ll diff = limit - arr[i];
        if (diff <= 0) {
            limit = arr[i];
        }
        else {
            ll second = lower_bound(pref_power.begin(), pref_power.end(), diff) - pref_power.begin();
            mx = max(mx, second + 1);
            // cout << second << nl;
        }
        // cout << limit << nl;
    }
    cout << mx << nl;
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
    init();
    while(t--) {
        solve();
    }
    return 0;
}