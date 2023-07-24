#include<bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin >> n;
    int cnt = 0;
    string pie = "314159265358979323846264338327";
    for(int i=0; i<pie.size(); i++){
        if(n[i] != pie[i]) break;
        if(n[i] == pie[i])
            cnt++;
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

