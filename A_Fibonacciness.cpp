#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

ll calculate(vector<ll> &arr) {
    ll cnt = 0;
    for (int i = 2; i < 5; i++) {
        cnt += (arr[i] == (arr[i - 1] + arr[ i - 2]));
    }
    return cnt;
}

void solve(){
    vector<ll> arr(5, 0);
    cin >> arr[0] >> arr[1] >> arr[3] >> arr[4];
    ll ans = -1;
    for (int i = -100; i <= 100; i++) {
        arr[2] = i;
        ans = max(ans, calculate(arr));
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}