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

ll __lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    return a.second < b.second;
}

void solve(){
    ll x;
    cin >> x;
    if (x == 1) {
        cout << 1 << " " << 1 << nl;
        return;
    }
    pair<ll, ll> ans = {llmx, llmx};
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            ll temp = x / i;
            if (__gcd(i, temp) == 1) {
                ll a = i, b = temp;
                if (a > b) swap(a, b);
                if (ans.second > b) {
                    ans = {a, b};
                }
            }
            else {
                ll a = i, b = x;
                if (a > b) swap(a, b);
                if (ans.second > b) {
                    ans = {a, b};
                }
            }
        }
    }   
    cout << ans.first << " " << ans.second << nl;
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