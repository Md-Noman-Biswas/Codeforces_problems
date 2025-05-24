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

bool predicate(ll mid, vector<ll> &arr, ll sum) {
    ll total = sum + mid;
    arr[arr.size() - 1] += mid;
    ll avg_ppl = ceil((arr.size() * 1.0) / 2);

    ll avg = ceil((total * 1.0) / arr.size());

    ll pivot = ceil((avg * 1.0) / 2);
    auto it = lower_bound(arr.begin(), arr.end(), pivot);
    --it;
    ll unhappy = it - arr.begin();
    unhappy++;
    arr[arr.size() - 1] -= mid;
    // cout << mid << " " << unhappy << nl;
    if (arr.size() % 2 == 0) return unhappy > avg_ppl;
    else return unhappy >= avg_ppl;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }   
    sort(arr.begin(), arr.end());

    if (n == 1 || n == 2) {
        cout << -1 << nl;
        return;
    }
    ll l = 0, r = 1e18;
    ll ans = -1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (predicate(mid, arr, sum)) {
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