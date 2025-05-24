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

void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll> (n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ;j++) {
            cin >> arr[i][j];
        }
    }   

    vector<vector<ll>> pref(n, vector<ll> (n + 1, 0));
    for (int i = n - 1; i >= 0; i--) {
        pref[i][n - 1] = arr[i][n - 1];
        for (int j = n - 1; j >= 0; j--) {
            pref[i][j] = pref[i][j + 1] + arr[i][j];
        }
        reverse(pref[i].begin(), pref[i].end());
    }
    sort(pref.begin(), pref.end());
    // reverse(pref.begin(), pref.end());
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= n;j++) {
    //         cout << pref[i][j] << " ";
    //     }
    //     cout << nl;
    // }
    vector<ll> hsh(n, 0);
    ll req = 0;
    for (int j = 0; j <= n; j++) {
        for (int i = n - 1; i >= 0; i--) {
            if (pref[i][j] == req && !hsh[i]) {
                req++;
                hsh[i] = 1;
                break;
            }
        }
    }
    cout << req << nl;
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