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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (n == 1) {
        cout << 1 << nl;
        return;
    }
    vector<ll> diff;
    for (int i = 1; i < n; i++) {
        diff.push_back(arr[i] - arr[i - 1]);
    }   

    sort(diff.begin(), diff.end());
    vector<ll> pref(diff.size());
    pref[0] = diff[0];
    for (int i = 1; i < diff.size(); i++) {
        pref[i] = pref[i - 1] + diff[i];
    }
    // sort(diff.begin(), diff.end());
    ll cost = arr.back() - arr.front() + 1;
    if (k == n) {
        cost = min(k, n);
    }
    ll cnt = 0;
    for (int i = diff.size() - 1; i > 0; i--) {
        cnt++;
        if (cnt == k) break; 
        // cout << cnt + pref[i - 1] + 1 << nl;
        cost = min(cost, cnt + pref[i - 1] + 1);
    }
    cout << cost << nl;
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