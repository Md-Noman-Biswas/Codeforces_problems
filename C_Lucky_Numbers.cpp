#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll n){
    ll ans = 1;
    for(ll i=1; i<=n; i++){
        ans *= i; 
    }
    return ans;
}
void solve(){
    ll n;
    cin >> n;
    ll ans1 = 0;
    for(ll i=1; i<=n; i++){
        ans1 += pow(2,i);
    }
    cout << ans1 << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     solve();
    return 0;
}