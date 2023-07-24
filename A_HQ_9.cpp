#include<bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin >> n;
    int count = 0;
    for(int i=0; i<n.size(); i++){
        if((int)n[i] == 'H' || (int)n[i] == 'Q' || ((int)n[i] == '9')){
            count++;
        }
    }
    if(count > 0){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
int main(){
    solve();
}