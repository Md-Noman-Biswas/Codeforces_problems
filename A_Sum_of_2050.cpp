#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sumofcnt(ll n){
    ll sum = 0;
    while(n > 0){
        ll digit = n%10;
        sum += digit;
        n /= 10;
    }    
    return sum;
}
void solve(){
    ll n;
    cin >> n;
    ll cnt = 0;
    ll value = 0; 
    ll ans;
    if(n % 2050 != 0){
        cout << -1 << "\n";
        return;
    }else{
        n = n/2050;
        ans = sumofcnt(n);
        cout << ans << "\n";
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