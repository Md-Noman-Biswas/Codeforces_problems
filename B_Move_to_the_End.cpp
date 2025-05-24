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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<ll> max_till_here(n, -1);

    ll mx = arr[0];
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        max_till_here[i] = mx;
    }

    vector<ll> suff(n, 0);
    suff[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + arr[i];
    }

    // for (auto it: max_till_here) cout << it << " ";
    // cout << nl;

    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) cout << max_till_here[n - 1] << " ";
        else {
            // cout << suff[n - i] << "*" " ";
            // cout << i << nl;
            cout << suff[i + 1] + max_till_here[i] << " ";
        }
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