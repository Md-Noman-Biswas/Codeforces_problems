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
const ll INF = 1e18;

ll maxSubarraySum(vector<ll> &arr) {
    ll res = arr[0];
    ll maxEnding = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}


void solve(){
    ll n, k;
    cin >> n >> k;
    string s; 
    cin >> s;
    
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (s[i] == '0') arr[i] = -INF;
    }

    ll max_sum = 0, curr_sum = 0;
    ll start = 0, end = 0, temp_start = 0;

    for (int i = 0; i < n; i++) {
        if (curr_sum + arr[i] >= arr[i]) {
            curr_sum += arr[i];
        } else {
            curr_sum = arr[i];
            temp_start = i;
        }

        if (curr_sum > max_sum) {
            max_sum = curr_sum;
            start = temp_start;
            end = i;
        }
    }

    // if (max_sum < 0) {
    //     max_sum = 0;
    //     start = 0;
    //     end = 0;
    // }

    if (max_sum == k) {
        YES;
        for (auto it: arr) cout << it << " ";
        cout << nl;
        return;
    }

    if (max_sum > k) {
        NO;
        return;
    }

    ll zero = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zero = i;
            break;
        }
    }

    if (zero == -1) {
        NO;
        return;
    }

    ll pref = 0;
    ll curr = 0;
    for (int i = zero - 1; i >= 0; i--) {
        curr += arr[i];
        pref = max(curr, pref);
    }

    ll suff = 0;
    curr = 0;
    for (int i = zero + 1; i < n; i++) {
        if (s[i] == '0') break;
        curr += arr[i];
        suff = max(suff, curr);
    }

    arr[zero] = k - suff - pref;

    YES;
    for (auto it: arr) cout << it << " ";
    cout << nl;
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