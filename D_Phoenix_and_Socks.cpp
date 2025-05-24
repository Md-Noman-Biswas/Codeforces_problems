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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    map<ll, ll> left, right;
    for (int i = 0; i < l; i++) left[arr[i]]++;
    for (int i = l; i < n; i++) right[arr[i]]++;
    // for (auto it: right) cout << it.first << " " << it.second << nl;
    // cout << nl;
    // for (auto it: left) cout << it.first << " " << it.second << nl;
    // cout << nl;

    ll cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (right[i] && left[i]) {
            if (left[i] > right[i]) {
                left[i] -= right[i];
                right[i] = 0;
            }
            else {
                right[i] -= left[i];
                left[i] = 0;
            }
        }
    }

    ll left_size = 0, right_size = 0;
    for (int i = 1; i <= n; i++) left_size += left[i];
    for (int i = 1; i <= n; i++) right_size += right[i];

    if (left_size == right_size) {
        cout << left_size << nl;
        return;
    }

    if (left_size > right_size) {
        ll rem = left_size - right_size;
        for (int i = 1; i <= n; i++) {
            if (left[i] > 1) {
                ll diff = left[i];
                if (diff & 1) diff--;
                if (rem >= diff) {
                    rem -= diff;
                    if (left[i] % 2 == 0) left[i] = 0;
                    else left[i] = 1;
                    cnt += diff / 2;
                }
                else {
                    cnt += rem / 2;
                    left[i] -= rem;
                    rem = 0;
                }
            }
            if (rem == 0) break;
        }
    }
    else {
        ll rem = right_size - left_size;
        for (int i = 1; i <= n; i++) {
            if (right[i] > 1) {
                ll diff = right[i];
                if (diff & 1) diff--;
                if (rem >= diff) {
                    rem -= diff;
                    if (right[i] % 2 == 0) right[i] = 0;
                    else right[i] = 1;
                    cnt += diff / 2;
                }
                else {
                    cnt += rem / 2;
                    right[i] -= rem;
                    rem = 0;
                }
            }
            if (rem == 0) break;
        }
    }
    // for (auto it: right) cout << it.first << " " << it.second << nl;
    // cout << cnt << nl;
    // for (auto it: left) cout << it.first << " " << it.second << nl;

    // cout << cnt << nl;
    left_size = 0, right_size = 0;
    for (int i = 1; i <= n; i++) left_size += left[i];
    for (int i = 1; i <= n; i++) right_size += right[i];

    ll rem = abs(left_size - right_size);
    cnt = cnt + rem / 2;
    cnt = cnt + (left_size + right_size) / 2;
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