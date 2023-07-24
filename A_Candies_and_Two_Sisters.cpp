#include <bits/stdc++.h>
using namespace std;
#define long long int
void solve(){
    int a; 
    cin >> a;
    if(a%2 != 0){
        cout << a/2 << "\n";
    }else{
        cout << (a/2) - 1 << "\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}