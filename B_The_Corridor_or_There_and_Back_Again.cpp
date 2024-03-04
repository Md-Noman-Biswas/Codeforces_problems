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
    ll n;
    cin >> n;
    ll ans = llmx;
    while(n--){
        ll x, y;
        cin >> x >> y;
        if(y % 2 == 0){
            ll xd = x + (y / 2) - 1;
            ans = min(ans, xd);
        }else{
            ll xd = x + (y - 1) / 2;
            ans = min(ans, xd);
        }
    }   
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