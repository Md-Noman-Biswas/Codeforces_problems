#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a, b;
    cin >> a >> b;
    int x = a&b;
    int ans = (a^x) + (b^x);
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