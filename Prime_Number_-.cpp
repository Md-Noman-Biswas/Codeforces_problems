#include<bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin >> n;
    int cnt = 0;
    for(int i=0; i<n.size(); i++){
        if(n[i] = n[i+1]){
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

