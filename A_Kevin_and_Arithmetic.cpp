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
    vector<ll> even, odd;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   
        if (arr[i] % 2 == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    ll s = 0;
    ll cnt = 0;
    for (int i = 0; i < even.size(); i++) {
        // cout << even[i] << " ";
        s += even[i];
        if (s % 2 == 0) {
            cnt++;
            while (s % 2 == 0) {
                s /= 2;
            }
        }
    }
    // cout << s << nl;
    for (int i = 0; i < odd.size(); i++) {
        s += odd[i];
        if (s % 2 == 0) {
            cnt++;
            while (s % 2 == 0) {
                s /= 2;
            }
        }
    }
    cout << cnt << nl;
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