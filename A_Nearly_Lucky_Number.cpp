#include<bits/stdc++.h>
#define long long int
using namespace std;
void solve(){
    string n;
    cin >> n;
    int k=0;
    for(int i=0; i<n.size(); i++){
        if(n[i] == '4'){
            k++;
        }
        else if(n[i] == '7'){
            k++;
        }
    }
    //cout << k << "\n";
    if(k==4 || k==7){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
int main(){
    solve();
}