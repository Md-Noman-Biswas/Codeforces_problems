#include<bits/stdc++.h>
#define long long int
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    while(k!=0){
        if(n%10 == 0){
            n = n/10;
            k--;
        }
        
        else if(n%10 != 0){
            n = n-1;
            k--;
        }
    }
    cout << n << "\n";
}
int main(){
    solve();
}