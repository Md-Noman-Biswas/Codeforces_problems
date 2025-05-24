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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(5, 0);
    arr[0] = n;
    ll temp = n;
    for (int i = 1; i <= 4; i++) {
        if (temp % 2 == 0) {
            temp -= i;
        }
        else {
            temp += i;
        }
        arr[i] = temp;
    }
    
    // for (auto it: arr) cout << it << " ";
    // cout << nl;

    // cout << k % 4 << nl;

    if (n % 2 == 0) {
        ll base = k % 4;
        ll v = k / 4;
        // cout << base << nl;
        if (base % 2 == 0) {
            cout << arr[base] << nl;
        }
        else {
            if (base == 1) {
                cout << arr[base] - 4 * v << nl;
            }
            else if (base == 3){
                cout << arr[base] + 4 * v << nl; 
            }
        }
    }   
    else {
        ll base = k % 4;
        ll v = k / 4;
        if (base % 2 == 0) {
            cout << arr[base] << nl;
        }
        else {
            if (base == 1) {
                cout << arr[base] + 4 * v << nl;
            }
            else {
                cout << arr[base] - 4 * v << nl;
            }
        }
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