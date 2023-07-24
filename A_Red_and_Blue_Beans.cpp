#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(min(a,b) * (c+1) >= max(a,b)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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