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

bool pre(ll mid, ll k, map<ll, ll> &mp) {
    ll total = 0;
    for (auto it: mp) {
        ll current = it.second / mid;
        total += current;
    }
    return total >= k;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }   

    ll l = 1, r = n;
    ll ans = 1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (pre(mid, k, mp)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    vector<ll> t;
    ll sz = k;
    for (auto it: mp) {
        ll curr_sz = it.second;
        for (int i = 0; i < (it.second / ans); i++) {
            t.push_back(it.first);
        }
    }

    for (int i = 0; i < k; i++) {
        cout << t[i] << " ";
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
    solve();
    return 0;
}