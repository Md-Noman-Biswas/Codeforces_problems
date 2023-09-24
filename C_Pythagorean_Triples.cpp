#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
void solve(){
    ll n;
    cin >> n;
    if(n <= 2){
        cout << -1 << "\n";  
        return;
    }
    if(n%2 != 0){
        ll k = (n*n + 1)/2;
        ll m = k - 1;
        cout << k << " " << m << nl;
    }else{
        ll k = (n*n + 4)/4;
        ll m = k - 2;
        cout << k << " " << m << nl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}