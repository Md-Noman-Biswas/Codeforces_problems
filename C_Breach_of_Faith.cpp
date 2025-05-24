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
    vector<ll> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    deque<ll> left, right;
    ll sum_left = 0, sum_right = 0;
    for (int i = 1; i < 2 * n - 1; i++) {
        if (i < n) {
            left.push_back(arr[i]);
            sum_left += arr[i];
        }
        else {
            right .push_back(arr[i]);
            sum_right += arr[i];
        }
    }

    // for (auto it: left) cout << it << ' ';
    left.push_back(sum_right - sum_left + arr[0] + arr[2 * n - 1]);
    right.push_back(arr[0]); 
    right.push_back(arr[2 * n - 1]);

    for (int i = 0; i < right.size(); i++) {
        cout << right[i] << " ";
        if (i < left.size()) {
            cout << left[i] << " ";
        }
    }
    cout << nl;

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