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

ll check(ll a, ll b, ll x, ll y, ll n){
    ll temp1 = min(a - x, n);
    a -= temp1;
    n -= temp1;
    ll temp2 = min(b - y, n);
    b -= temp2;
    n -= temp2;
    return a*b;
}

void solve(){
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll ans = min(check(a, b, x, y, n), check(b,  a, y, x, n));
    cout << ans << nl;
    
}

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