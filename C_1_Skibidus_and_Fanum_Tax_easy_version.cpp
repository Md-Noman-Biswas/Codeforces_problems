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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n), brr(m);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < m; i++) cin >> brr[i];
    vector<ll> temp = arr;
    vector<ll> temp2 = arr;
    ll mn = min(arr[0], brr[0] - arr[0]);
    arr[0] = mn;
    for (int i = 1; i < n; i++) {
        mn = min(arr[i], brr[0] - arr[i]);
        ll mx = max(arr[i], brr[0] - arr[i]);
        if (mn < arr[i - 1]) {
            if (mx < arr[i - 1]) {
                NO;
                return;
            }
            else {
                arr[i] = mx;
            }
        }
        else {
            arr[i] = mn;
        }
    }
    YES;
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