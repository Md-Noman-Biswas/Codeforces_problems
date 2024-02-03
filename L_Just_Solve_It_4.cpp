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

ll div_till_n(ll lcm, ll n){
    return n/lcm;
}

void solve(){
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    ll temp = __gcd(n, m);
    ll lcm = (n/temp) * m; 
    if(n/temp > r/m){
        cout << 0 << nl;
        return;
    }
    cout << div_till_n(lcm, r) - div_till_n(lcm, l-1) << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}