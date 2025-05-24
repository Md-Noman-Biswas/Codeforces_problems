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
const int INF = 1e10 + 10;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n + 1, INF);
    vector<ll> positions(k);
    vector<ll> temp(k);
    ll mn = INF;
    ll mn_ind = -1;
    for (int i = 0; i < k; i++) cin >> positions[i];
    for (int i = 0; i < k; i++) cin >> temp[i];

    vector<pair<ll, ll>> pr;

    for (int i = 0; i < k; i++) {
        arr[positions[i]] = temp[i];
    }

    vector<ll> ans(n + 1, INF);

    ll cost = INF;
    for (int i = 1; i <= n; i++) {
        cost = min(cost, arr[i]);
        ans[i] = min(ans[i], cost);
        cost++;
    }
    cost = INF;
    for (int i = n; i >= 1; i--) {
        cost = min(cost, arr[i]);
        ans[i] = min(ans[i], cost);
        cost++;
    }

    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
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