#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n%2 != 0){
        cout << -1 << "\n";
        return;
    }else{
        for(int i=n; i>=1; i--){
        cout << i << " ";
        }
    }
}
int main(){
    solve();
}