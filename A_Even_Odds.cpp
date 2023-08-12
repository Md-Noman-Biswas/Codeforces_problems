#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
void solve(){
    ull n;
    cin >> n;
    ull k;
    cin >> k;
    ull ans;
     if(n%2 != 0){
         if(k == (n/2 + 1)){
            ans = n;
            cout << ans << "\n";
            return;
         }
         if(k >= (n/2 + 1)){
             ans = 2*1LL*k - (n+1);
         }else{
            ans = 2*1LL*k-1;
         }
     }else{
         if(k >= (n/2+1)){
             ans = 2*1LL*k - n;
         }else{
            ans = 2*1LL*k - 1;
        }
     }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}