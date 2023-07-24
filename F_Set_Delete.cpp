#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll> xd;
void solve(){
    ll o,v;
    cin >> o;
    if(o == 0){
        cin >> v;
        xd.insert(v);
        cout << xd.size() << "\n";
    }
    if(o == 1){
        cin >> v;
          auto it = xd.find(v);
        if(it != xd.end()){
            cout << 1 << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
    if(o == 2){
        cin >> v;
        xd.erase(v);
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}