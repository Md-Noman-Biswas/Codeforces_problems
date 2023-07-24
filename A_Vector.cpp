#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> xd;
void solve(){
    ll n,v;
    cin >> n;
    if(n == 0){
        cin >> v;
        xd.push_back(v);
    }
    if(n == 1){
        cin >> v;
        cout << xd[v] << "\n";
    }
    if(n == 2){
        xd.pop_back();
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