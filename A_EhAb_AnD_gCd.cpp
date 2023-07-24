#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lcm(ll a, ll b){
   ll lcm;
   if(a>b)
   lcm = a;
   else
   lcm = b;
   while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         return lcm;
         break;
      }
      lcm++;
   }
   return 0;
}
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve(){
    ll n;
    cin >> n;
    int x, y;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(gcd(i,j) + lcm(i,j) == n){
             x = i;
             y = j;
             break;   
            }
        }
    }
    cout << x << " " << y << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}