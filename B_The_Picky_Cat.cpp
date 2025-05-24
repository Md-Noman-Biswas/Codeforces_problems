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
    vector<ll> arr(n + 1, -INF);
    
    for (int i = 1; i <= n; i++) cin >> arr[i];
    ll cnt_small = 0;
    ll cnt_big = 0;

    ll mid = ceil((n * 1.0) / 2);
    ll left = mid - 1;
    ll right = n - mid;
    // cout << left << " " << right <<  nl;

    for (int i = 2; i <= n; i++) {
        if (abs(arr[i]) < abs(arr[1])) cnt_small++;
        else cnt_big++;
    }
    bool flag = false;

    // cout << cnt_small << " " << cnt_big << nl;

    //first element positive
    if (cnt_big >= right) {
        flag = true;
    }


    // first element negative
    if (cnt_small >= right && cnt_big >= left) {
        flag = true;
    }

    if (flag) YES;
    else NO;


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