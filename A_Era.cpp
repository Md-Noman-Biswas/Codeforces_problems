#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   ll n;
   cin >> n;
   vector<ll> arr(n+3);
   ll cnt = 0;
   for(ll i=1; i<=n; i++) cin >> arr[i];
   ll ans = arr[1] - 1;
   ll ind = ans;
   for(int i=2; i<=n; i++){
        if(ind + i < arr[i]){
            ll x = arr[i] - (ind + i);
            ans += x;
            ind += x;
        }
   }
   cout << ans << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}