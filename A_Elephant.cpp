#include<bits/stdc++.h>
#define unsigned long long int;
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans;
    if(n>5){
        if(n%5!=0) ans = (n/5) + 1;
        if(n%5 == 0) ans = n/5;
        cout << ans << "\n";
    }
    else cout << "1" << "\n";
}
//     int steps;
//     int ans;
//     int i=1;
//     if(n>5){
//         for(i=1; i<=n; i++){
//             steps = 5*i;
//             if(steps>n){
//                 break;
//             }
//             if(i%2!=0){
//            ans = i;
//             break;
//         }
//         else if(i%2 == 0){
//             ans = i-1;
//         }
//         }
//     cout << ans << "\n";
//     }
//     else{
//         cout << "1" << "\n";
//     }
// }

int main(){
    solve();
}