#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    int ans = min(min(a,b),(a+b)/4);
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