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
    string s;
    cin >> s;

    ll ope = 0;
    for (int i = 0; i < k / 2; i++) {
        map<char, ll> mp;
        mp[s[i]]++;
        for (int j = i + k; j < n; j += k) {
            mp[s[j]]++;
        }
        mp[s[k - i - 1]]++;
        for (int j = k - i - 1 + k; j < n; j += k) {
            mp[s[j]]++;
        }

        ll total = 0;
        ll mx = -1;
        for (auto it: mp) {
            total += it.second;
            mx = max(mx, it.second);
        }
        ope += total - mx;
    }
    // cout << ope << nl;

    if (k % 2) {
        ll mid = k / 2;
        map<char, ll> mp;
        mp[s[mid]]++;
        for (int j = mid + k; j < n; j += k) {
            mp[s[j]]++;
        }
        ll total = 0;
        ll mx = -1;
        for (auto it: mp) {
            total += it.second;
            mx = max(mx, it.second);
        }
        ope += total - mx;
    }

    cout << ope << nl;
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