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
    
    ll zero = 3, one = 1, two = 2, three = 1, five = 1;
    bool flag = false;
    ll ans = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0 && zero > 0) zero--;
        if (arr[i] == 1 && one > 0) one--;
        if (arr[i] == 2 && two > 0) two--;
        if (arr[i] == 3 && three > 0) three--;
        if (arr[i] == 5 && five > 0) five--;
        if (zero == 0 && one == 0 && two == 0 && three == 0 && five == 0) {
            flag = true;
            ans = i;
            break;
        }
    }
    if (flag) {
        cout << ++ans << nl;
    }
    else {
        cout << 0 << nl;
    }
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