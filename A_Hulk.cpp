#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string a = "I hate it";
    string b = "I love it";
    string c = "I hate that ";
    string d = "I love that ";
    string ans = "";
    if(n%2 == 1){
        for(int i=1; i<=n; i++){
            if(i<n){
                if(i%2 == 1){
                    ans += c;
                }
                if(i%2 == 0) ans += d;
            }
            if(i == n){
                ans += a ;
            }
            }
        }
    if(n%2 == 0){
        for(int i=1; i<=n; i++){
            if(i<n){
                if(i%2 == 1){
                    ans += c;
                }
                if(i%2 == 0) ans += d;
            }
            if(i == n){
                ans += b;
            }
            }
        }
    
    cout << ans << "\n";
}
int main(){
    solve();
}

