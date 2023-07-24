#include<bits/stdc++.h>
#define unsigned long long int;
using namespace std;
void solve(){
    int k,n,w;
    cin >> k >> n >> w;
    int total=0,rent;
    for(int i=1; i<=w; i++){
        total += i*k;
        rent = total - n;
    }
     if(rent<0){
            cout << "0" << "\n";
        }
    else cout << rent << "\n";

}
int main(){
    solve();
}