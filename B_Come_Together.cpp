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

ll overlap(ll xa, ll xb, ll xc){
    if(xa >= xc && xa >= xb){
        return min(xa - xc, xa - xb);
    }
    if(xa <= xc && xa <= xb){
        return min(xc - xa, xb - xa);
    }
    return 0;
}

void solve(){
    ll a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    ll ans = 1;
    ans += overlap(a1, b1, c1) + overlap(a2, b2, c2);
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