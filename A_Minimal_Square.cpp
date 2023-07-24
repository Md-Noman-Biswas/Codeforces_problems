#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    int swap1 = max(2*a,b);
    int swap2 = max(a,2*b);
    int final = min(swap1,swap2);
    cout << final * final << "\n"; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}