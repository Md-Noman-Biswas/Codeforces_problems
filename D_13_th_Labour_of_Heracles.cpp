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
    ll n; cin >> n;
    vector<ll> arr(n + 1);
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    vector<ll> degree(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }
    cout << sum << " ";

    priority_queue<pair<ll, ll>> pq;
    for (int i = 1; i <= n; i++) {
        degree[i]--;
        if (degree[i] > 0) {
            pq.push({arr[i], degree[i]});
        }
    }

    for (int i = 2; i < n; i++) {
        auto node = pq.top();
        pq.pop();
        sum += node.first;
        cout << sum << " ";
        node.second = node.second - 1;
        if (node.second > 0) pq.push(node);
    }
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