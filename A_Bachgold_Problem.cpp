#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin >> n;
   if(n%2 == 0){
    cout << n/2 << "\n";
    for(int i=0; i<n/2; i++){
        cout << 2 << " ";
    }
   }else{
    int p = n-3;
    cout << (p/2) + 1 << "\n";
    for(int i=0; i<p/2; i++){
        cout << 2 << " ";
    }
    cout << 3 << "\n"; 
   }
}
   
int main(){
   solve();
}