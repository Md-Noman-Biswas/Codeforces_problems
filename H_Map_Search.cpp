#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string,int> mp;
void solve(){
    int op;
    cin >> op;
    string s;
    int value;
    if(op == 0){
        cin >> s;
        cin >> value;
        mp[s] = value; 
    }
    else if(op == 1){
        cin >> s;
        cout << mp[s] << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}