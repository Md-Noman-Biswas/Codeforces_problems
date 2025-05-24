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
    ll a, b, k;
    cin >> a >> b >> k;
    vector<pair<ll, ll>> edges;
    vector<ll> boy(a + 1, 0), girl(b + 1, 0);
    vector<ll> arr(k + 1), brr(k + 1);
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        boy[arr[i]]++;
    }
    for (int i = 0; i < k; i++) {
        cin >> brr[i];
        girl[brr[i]]++;
    }

    for (int i = 0; i < k; i++) {
        edges.push_back({arr[i], brr[i]});
    }
    ll ans = 0;

    for (int i = 0; i < edges.size(); i++) {
        ans += k - boy[arr[i]] - girl[brr[i]] + 1;
    }
    cout << ans / 2 << nl;
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