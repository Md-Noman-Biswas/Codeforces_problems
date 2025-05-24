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

ll n, m;

bool check(ll mid, map<ll, ll> &mp) {
    ll two_hr_task = 0;
    ll incomplete_task = 0;
    for (int i = 1; i <= n; i++) {
        ll temp = (mid - min(mid, mp[i])) / 2;
        two_hr_task += (temp);
        incomplete_task += mp[i] - min(mp[i], mid);
    }
    return two_hr_task >= incomplete_task;
}

void solve(){
    cin >> n >> m;
    vector<ll> arr(m + 1);
    map<ll, ll> mp;
    for (int i = 1; i <= m; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }   
    ll l = 0, r = 2 * m;
    ll ans = 2 * m;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(mid, mp)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
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