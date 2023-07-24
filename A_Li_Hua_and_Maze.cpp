#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll m,n;
    cin >> n >> m;
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if((x1 == 1 && y1 == 1) || (x2 == 1 || y2 == 1)){
        cout << 3 << "\n";
    }
    else if((x1 ==  && y1 == m) || x2 == m || y2 == m ){
        cout << 3 << "\n";
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