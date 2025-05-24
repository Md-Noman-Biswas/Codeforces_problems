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
const int N = 2e3 + 7;
const int INF = 1e10 + 10;


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    priority_queue<ll, vector<ll>, greater<ll>> pq;

  
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        pq.push(arr[i]);
        while (sum < 0 && !pq.empty()) {
            ll v = pq.top();
            pq.pop();
            sum += abs(v);
        }
    }
    cout << pq.size() << nl;
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