#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    char str[a][b];
    vector<int> v;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> str[i][j];
            if(str[i][j] == '*'){
                v.push_back(i+1);
                v.push_back(j+1);
            }
        }
    }
    if(v[2] == v[4] && v[1] > v[3] ){
        cout << v[0] << " " << v[3] << "\n";
    }
    if(v[2] == v[4] && v[1] == v[3] ){
        cout << v[0] << " " << v[5] << "\n";
    }
    else if(v[0] == v[2] && v[3] > v[5]){
        cout << v[4] << " " << v[3] << "\n";
    }
    else if(v[0] == v[2] && v[3] == v[5]){
        cout << v[4] << " " << v[1] << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}