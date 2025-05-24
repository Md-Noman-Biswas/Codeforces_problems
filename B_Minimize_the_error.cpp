#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;


void solve(){
    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    vector<ll> arr(n), brr(n);
    vector<ll> diff;
    ll k = k1 + k2;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    priority_queue<ll> pq;
    for (int i = 0; i < n; i++) diff.push_back(abs(arr[i] - brr[i]));
    for (auto it: diff) pq.push(it);
    while (k > 0) {
        ll tp = pq.top();
        pq.pop();
        pq.push(abs(tp - 1));
        k--;
    }

    ll ans = 0;

    while (!pq.empty()) {
        ll tp = pq.top();
        ans += (tp * tp);
        pq.pop();
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
    solve();
    return 0;
}