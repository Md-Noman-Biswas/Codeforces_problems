#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;


bool check(ll x, ll mx) {
    if (x == mx) return true;
    ll n_x = x;
    vector<ll> v;
    v.push_back(n_x);
    while (n_x - x < 20) {
        n_x += (n_x % 10);
        v.push_back(n_x);
        // cout << n_x << " ";
        if (n_x == mx) return true;
        if (n_x % 10 == 0) return false;
    }
    // cout << nl;

    for (int i = 0; i < v.size(); i++) {
        if ((mx - v[i]) % 20 == 0) {
            return true;
        }
    }
    return false;
}


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            mx = max(mx, arr[i]);
        }
        else {
            arr[i] += (arr[i] % 10);
            mx = max(mx, arr[i]);
        }
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (!check(arr[i], mx)) {
            flag = false;
            break;
        }
    }   
    if (flag) YES;
    else NO;
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