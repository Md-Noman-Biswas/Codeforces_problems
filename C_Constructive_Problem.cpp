#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
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
    ll mx = 0;
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<ll> temp = arr;
    // sort(arr.begin(), arr.end());
    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++) {
        if (temp[i] == mx) mx++;
    }

    if (mx == n) {
        NO;
        return;
    }
    // cout << mx << nl;
    vector<ll> trim;
    ll target = mx + 1;
    ll l = 0;
    while (l < n) {
        if (arr[l] == target) break;
        else {
            trim.push_back(arr[l]);
            l++;
        }
    }

    ll r = n - 1;
    while (r >= 0) {
        if (arr[r] == target) break;
        else {
            trim.push_back(arr[r]);
            r--;
        }
    }

    ll current_mx = 0;
    sort(trim.begin(), trim.end());
    for (int i = 0; i < trim.size(); i++) {
        if (trim[i] == current_mx) {
            current_mx++;
        }
    }
    // cout << current_mx << nl;

    if (mx == current_mx) YES;
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