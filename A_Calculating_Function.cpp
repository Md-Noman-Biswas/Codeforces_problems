#include<bits/stdc++.h>
using namespace std;
//#define llu unsigned long long
void solve(){
    long long int n;
    cin >> n;
    // long long int sum1 = 0, sum2 = 0;
    // if(n<1000000){
    //     for(int i=1; i<=n; i++){
    //         if(i%2 == 0){
    //             sum1 += i;
    //         }
    //             else{
    //                 sum2 += i;
    //             }
    //          }
    //          cout << sum1 - sum2 << "\n";
    //     }else{
            if(n%2==0){
                cout << n/2 << "\n";
            }else{
                cout << -((n/2) + 1) << "\n";
            }
        }

int main(){
   solve();
}