#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    ans = (n*(n+1))/2;
    int powerOF2 = 1;
    while(powerOF2 <= n){
        ans -= (2*powerOF2);
        powerOF2 *= 2;
    }
    cout << ans << "\n";

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