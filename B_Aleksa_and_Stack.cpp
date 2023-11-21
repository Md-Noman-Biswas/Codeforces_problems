#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    ll cnt = 0;
    for(int i=1; ; i+=2){
        cnt ++;
        cout << i << " ";
        if(cnt == n){
            break;
        }
    }
    cout << nl;
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