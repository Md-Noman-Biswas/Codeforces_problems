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

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> v;
    v.push_back(0);
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll ans = llmn;
    for(int i = 0; i < v.size() - 1; i++){
        ll diff = v[i + 1] - v[i];
        ans = max(diff, ans);
    }
    ll xd = (abs(v.back() - x)) * 2;
    ans = max(xd, ans);
    cout << ans << nl;
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