#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YA\n"
#define NO cout << "TIDAK\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> arr(n), brr(m);
    map<ll, ll> mp;
    vector<ll> order;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int j = 0; j < m; j++) {
        cin >> brr[j];
        if (mp[brr[j]] == 0) order.push_back(brr[j]);
        mp[brr[j]]++;
    }
    // for (auto it: order) cout << it << " ";
    // cout << nl;

    ll l = 0;
    bool flag = true;
    while (l < order.size()) {
        if (arr[l] != order[l]) {
            flag = false;
            break;
        }
        else {
            l++;
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