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
    ll n, m;
    cin >> n >> m;
    
    vector<vector<ll>> arr(n, vector<ll> (m));
    ll neg = 0;

    ll sum = 0;
    ll mn = llmx;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            mn = min(mn, abs(arr[i][j]));
            if (arr[i][j] == 0) flag = true;
            if (arr[i][j] < 0) neg++;
            sum += abs(arr[i][j]);
        }
    }

    if (flag) {
        cout << sum << nl;
    }
    else {
        if (neg % 2 == 0) {
            cout << sum << nl;
        }
        else {
            cout << sum - 2 * mn << nl;
        }
    }
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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