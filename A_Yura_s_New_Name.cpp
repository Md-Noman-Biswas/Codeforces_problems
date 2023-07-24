#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int cnt = 0;
    cin >> s;
    if(s.size() == 1){
        if(s[0] == '^'){
            cnt++;
        }
    }
    if(s[0] == '_') cnt++;
    if(s[s.size()-1] == '_') cnt++;
    for(int i=1; i<s.size(); i++){
        if(s[i] == '_' && s[i-1] == '^' && s[i+1] != '^'){
            cnt++;
        }
        else if(s[i] == '_' && s[i+1] == '_'){
            cnt++;
        }
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}