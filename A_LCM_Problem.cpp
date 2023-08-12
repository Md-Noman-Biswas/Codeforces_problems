#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll l,r;
    cin >> l >> r;
    if(2*1LL*l <= r){
        cout << l << " " << 2*l << "\n";
    }else{
        cout << -1 << " " << -1 << "\n";
    }
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