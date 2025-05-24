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
    vector<ll> arr(n);
    vector<ll> xd;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i % 2 != 0) xd.push_back(arr[i]);
    }
    // for (auto it: xd) cout << it << ' ';
    // cout << nl;
    if (n == k) {
        for (int i = 0; i < xd.size(); i++) {
            if (xd[i] != i + 1) {
                cout << i + 1 << nl;
                return;
            }
        }
        cout << xd.size() + 1 << nl;
        return;
    }

    vector<ll> trim;
    ll v = n - k + 1;
    ll ind = 1;
    while (v) {
        trim.push_back(arr[ind]);
        ind++;
        v--;
    }
    // reverse(trim.begin(), trim.end());
    // for (int i = 1; i < n - k + 1; i++) trim.push_back(arr[i]);
    // for (auto it: trim) cout << it << " ";
    // cout << nl;

    bool flag = false;
    for (auto it: trim) {
        if (it != 1) {
            flag = true;
        }
    }

    if (flag) {
        cout << 1 << nl;
    }
    else {
        cout << 2 << nl;
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