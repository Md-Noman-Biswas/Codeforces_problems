#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int cnt = 0;
    while(cin >> s && s != "*"){
        cnt++;
        cout << "Case " << cnt << ":" << " ";
        if(s == "Hajj"){
            cout << "Hajj-e-Akbar" << "\n";
        }else{
            cout << "Hajj-e-Asghar" << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}