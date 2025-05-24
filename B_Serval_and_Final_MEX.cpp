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
    bool flag_right = false;
    bool flag_left = false;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) flag = true;
        if (i < n - 1 && arr[i] == 0) flag_left = true;
        if (i > 0 && arr[i] == 0) flag_right = true;
    }

    if (!flag) {
        cout << 1 << nl;
        cout << 1 << " " << n << nl;
        return;
    }
    
    if (arr[0] != 0 && flag_right) {
        cout << 2 << nl;
        cout << 2 << " " << n << nl;
        cout << 1 << " " << 2 << nl;
    }
    else if (arr[n - 1] != 0 && flag_left) {
        cout << 2 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << 1 << " " << 2 << nl;
    }
    else {
        cout << 3 << nl;
        cout << 1 << " " << n - 2 << nl;
        cout << 2 << " " << 3 << nl;
        cout << 1 << " " << 2 << nl;
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