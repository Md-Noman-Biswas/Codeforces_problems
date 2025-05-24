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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll one = 0, sum = 0;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if (arr[i] == 1) {
            one++;
            continue;
        }
        sum += arr[i];
    }   
    sort(arr.begin(), arr.end());
    // cout << sum << nl;
    if ((arr.back() - 1) - arr.front() > k) {
        cout << "Jerry" << nl;
        return;
    }

    if (arr.back() - arr.front() == k + 1 && mp[arr.back()] > 1) {
        cout << "Jerry" << nl;
        return;
    }

    //0 = tom
    //1 = jerry

    bool flag = 0;
    if (sum % 2 != 0) flag = 1;

    // cout << flag << nl;
    if (flag == 0) {
        if (one % 2 != 0) {
            cout << "Tom" << nl;
        }
        else {
            cout << "Jerry" << nl;
        }
    }
    else {
        if (one % 2 != 0) {
            cout << "Jerry" << nl;
        }
        else {
            cout << "Tom" << nl;
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