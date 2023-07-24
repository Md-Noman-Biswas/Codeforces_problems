#include<bits/stdc++.h>
using namespace std;
void solve(){
   int a,b;
   cin >> a >> b;
   int minOF = min(a,b);
   if(minOF % 2 == 0){
    cout << "Malvika" << "\n";
   }else{
    cout << "Akshat" << "\n";
   }
}
   
int main(){
   solve();
}