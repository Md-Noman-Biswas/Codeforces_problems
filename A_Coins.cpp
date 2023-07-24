#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   ll n,k;
   cin >> n >> k;
   if(n % k == 0) cout << "YES" << "\n";
   else if(n < k && n != 2) cout << "NO" << "\n";
   else if(n < k && n == 2) cout << "YES" << "\n";
   else if(n > k){
    ll v = n-2;
    ll v2 = n - k;
    ll v3 = v % 2;
    ll v4 = v % k;
    if(v % k == 0 || v2 % 2 == 0 || v3 % k == 0 || v4 % 2 == 0 ) cout << "YES" << "\n";
    else cout << "NO" << "\n";
   }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}