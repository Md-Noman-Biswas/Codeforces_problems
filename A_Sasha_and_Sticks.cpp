#include<bits/stdc++.h>
using namespace std;
void solve(){
   long long a, b;
   cin >> a >> b;
   int temp = a/b;
   if(temp % 2 == 0){
        cout << "NO" << "\n";
   }else{
    cout << "YES" << "\n";
   }
}
int main(){
    solve();
}