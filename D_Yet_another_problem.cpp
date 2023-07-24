#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll v,t;
    cin >> v >> t;
    ll result = v*2*t;
    cout << result << "\n";
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