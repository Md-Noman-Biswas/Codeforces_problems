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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }   
    vector<ll> dbl;
    vector<ll> sml;
    for (auto it: mp) {
        if (it.second > 1) {
            dbl.push_back(it.first);
        }
        else {
            sml.push_back(it.first);
        }
    }
    sort(dbl.begin(), dbl.end());
    ll sz = dbl.size();
    if (dbl.empty()) {
        cout << -1 << nl;
        return;
    }
    ll a = dbl[sz - 1];
    ll b = a;
    mp[a]--;
    mp[b]--;
    vector<ll> rem;
    for (auto it: mp) {
        if (it.second > 0) {
            while (it.second > 0) {
                rem.push_back(it.first);
                it.second--;
            }
        }
    }
    sort(rem.begin(), rem.end());
    // cout << a << ' ' << b << nl;
    ll c = rem[0];
    ll d = rem[1];
    ll diff = d - c;
    // cout << c << " " << d << nl;
    for (int i = 2; i < rem.size(); i++) {
        if (rem[i] - rem[i - 1] < diff) {
            c = rem[i - 1];
            d = rem[i];
            diff = rem[i] - rem[i - 1];
        }
    }
    // cout << diff << nl;
    if (diff < 2 * b) {
        cout << a << " " << b << " " << c << " " << d << nl;
    }
    else {
        cout << -1 << nl;
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