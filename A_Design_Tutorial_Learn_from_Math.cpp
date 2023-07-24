#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n%2 == 0){
        int digit = n-8;
        cout << digit << " 8"  << "\n"; 
    }
    else{
        cout << n-9 << " 9" << "\n";
    }
}
   
int main(){
   solve();
}