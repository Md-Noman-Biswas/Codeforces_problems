#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }   
    sort(arr.begin(), arr.end());

    if (mp.size() == 1) {
        cout << 0 << " ";
        ll temp = n - 1;
        cout << temp * (temp + 1) / 2;
        return;
    }

    ll cnt1 = mp[arr.front()];
    ll cnt2 = mp[arr.back()];
    ll diff = arr.back() - arr.front();

    cout << diff << " " << cnt1 * 1LL * cnt2 << nl;
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