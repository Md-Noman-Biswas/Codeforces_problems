#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    int x = (__gcd(a,b)|c,;
    if(x){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    // int sum = 0;
    // for(int i=0; i<=c; i += a){
    //     for(int j=0; j<=c; j += b){
    //         if((i+j) == c){
    //             cout << "Yes" << "\n";
    //             return;
    //         }
    //     }
    // }
    // cout << "No" << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}