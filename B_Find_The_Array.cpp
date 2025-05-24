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
    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    vector<ll> ans1;
    vector<ll> ans2;
    ll diff1 = 0;
    ll diff2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            diff1 += abs(arr[i] - 1);
        }
        else {
            diff2 += abs(arr[i] - 1);
        }
    }
    // cout << sum << nl;
    // cout << diff1 << " " << diff2  << nl;
    if (2 * diff1 <= sum) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << 1 << " ";
            }
            else {
                cout << arr[i] << " ";
            }
        }
        cout << nl;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << arr[i] << " ";
            }
            else {
                cout << 1 << " ";
            }
        }
        cout << nl;
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