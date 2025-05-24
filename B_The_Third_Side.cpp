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
    ll n;
    cin >> n;
    deque<ll> dq;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        dq.push_back(x);
    }   
    sort(dq.begin(), dq.end());

    while (dq.size() != 1) {
        ll last = dq.back();
        ll first = dq.front();
        dq.pop_back();
        dq.pop_front();
        ll temp = last + first;
        dq.push_back(temp - 1);
    }

    // cout << dq.size() << nl;
    cout << dq[0] << nl;
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