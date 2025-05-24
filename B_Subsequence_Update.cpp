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
    ll n, l, r;
    cin >> n >> l >> r;
    l--;
    r--;
    vector<ll> arr(n);
    ll mn = llmx;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mn = min(arr[i], mn);
    }
    if (l == r) {
        cout << mn << nl;
        return;
    }

    vector<ll> pivot;
    for (int i = l; i <= r; i++) pivot.push_back(arr[i]); 
    vector<ll> left, right;
    for (int i = 0; i < l; i++) left.push_back(arr[i]);
    for (int i = r + 1; i < n; i++) right.push_back(arr[i]);
    // sort(pivot.begin(), pivot.end());
    // sort(left.begin(), left.end());
    // sort(right.begin(), right.end());
    vector<ll> reserved = pivot;

    for (int i = 0; i < pivot.size(); i++) {
        left.push_back(pivot[i]);
    }
    for (int j = 0; j < pivot.size(); j++) {
        right.push_back(pivot[j]);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < r - l + 1; i++) sum1 += left[i];
    for (int j = 0; j < r - l + 1; j++) sum2 += right[j];

    cout << min(sum1, sum2) << nl;

    // for (auto it: left) cout << it << " ";
    // cout << nl;

    // if (!left.empty()) {
    //     ll lef = 0;
    //     ll pivot_ind = pivot.size() - 1;
    //     // cout << pivot[pivot_ind] << " " << left[lef] << nl;
    //     while (lef < l && pivot_ind >= 0) {
    //         if (pivot[pivot_ind] > left[lef]) {
    //             pivot[pivot_ind] = left[lef];
    //         }
    //         // else {
    //         //     break;
    //         // }
    //         lef++;
    //         pivot_ind--;
    //     }
    // }   

    // if (!right.empty()) {
    //     ll lef = 0;
    //     ll reserved_ind = reserved.size() - 1;
    //     // cout << reserved[reserved_ind] << " " << right[lef] << nl;
    //     while (lef < n && reserved_ind >= 0) {
    //         if (reserved[reserved_ind] > right[lef]) {
    //             reserved[reserved_ind] = right[lef];
    //         }
    //         // else {
    //         //     break;
    //         // }
    //         lef++;
    //         reserved_ind--;
    //     }
    // }   

    // ll sum1 = 0;
    // ll sum2 = 0;

    // for (auto it: pivot) sum1 += it;
    // for (auto it: reserved) sum2 += it;

    // // cout << sum1 << " " << sum2 << nl;
    // cout << min(sum1, sum2) << nl;
    // // for (auto it: reserved) cout << it << " ";
    // // cout << nl;
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