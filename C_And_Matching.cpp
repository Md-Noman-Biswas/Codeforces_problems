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
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    if (n == 4 && k == 3) {
        cout << -1 << nl;
        return;
    }
    for (int i = 0; i < n / 2; i++) {
        mp[i] = n - i - 1;
        mp[n - i - 1] = i;
    }

    // for (auto it: mp) cout << it.first << " " << it.second << nl; 
    // cout << nl;

    if (k == n - 1) {
        mp[0] = 1;
        mp[1] = 0;
        mp[4] = n - 2;
        mp[n - 2] = 4;
        mp[n - 1 - 4] = n - 1;
        mp[n - 1] = n - 1 - 4;
    }
    else {
        mp[0] = mp[k];
        mp[mp[k]] = 0;
        mp[k] = n - 1;
        mp[n - 1] = k;
    }
    set<ll> st;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (st.find(i) == st.end()) {
            cout << i << " " << mp[i] << nl;
            sum += (i & mp[i]);
            st.insert(i);
            st.insert(mp[i]);
        }
    }
    // cout << sum << nl;
    // cout << nl;
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