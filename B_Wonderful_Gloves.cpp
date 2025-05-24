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
    vector<ll> arr(n), brr(n);

    vector<vector<ll>> hsh(n, vector<ll> (2, 0));
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > brr[i]) {
            ans += arr[i];
            hsh[i][0] = 1;
        }
        else {
            ans += brr[i];
            hsh[i][1] = 1;
        }
    }

    vector<ll> rem;
    for (int i = 0; i < n; i++) {
        if (hsh[i][0] == 0) rem.push_back(arr[i]);
        if (hsh[i][1] == 0) rem.push_back(brr[i]);
    }
    sort(rem.begin(), rem.end());
    reverse(rem.begin(), rem.end());

    for (int i = 0; i < k - 1; i++) {
        ans += rem[i];
    }
    ans++;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}