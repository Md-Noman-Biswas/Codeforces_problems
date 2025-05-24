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
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];
    
    map<pair<ll, ll>, ll> mp;
    ll zero_always = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (brr[i] == 0) zero_always++;
            continue;
        }
        if (brr[i] == 0) {
            mp[{1, 0}]++;
            continue;
        }

        if (brr[i] < 0) arr[i] *= -1, brr[i] *= -1;
        ll gcd = __gcd(abs(arr[i]), abs(brr[i]));
        arr[i] /= gcd, brr[i] /= gcd;
        mp[{arr[i], brr[i]}]++;

    }
    ll mx = 0;
    pair<ll, ll> mx_v = {0, 0};
    // for (auto it: mp) cout << it.first.first << " " << it.first.second << " " << it.second << nl;
    for (auto it: mp) {
        mx = max(mx, it.second);
    }
    cout << mx + zero_always << nl;
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