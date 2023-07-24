#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    if(n%4 == 0 || n%4 == 3){
        cout << 0 << "\n";
    }else{
        cout << 1 << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     solve();
    return 0;
}