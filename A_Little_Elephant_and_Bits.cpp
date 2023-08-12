#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    vector<char> ans;
    bool flag = false;
    bool found_zero = false;
    for(int i=0; i<s.size(); i++){
        if(flag == false && s[i] == '0'){
            found_zero = true;
            flag = true;
            continue;
        }
        ans.push_back(s[i]);
    }
    if(found_zero == false){
        for(int i=0; i<(s.size()-1); i++){
            cout << s[i];
        }
        cout << "\n";
    }else{
        for(auto it: ans){
        cout << it;
        }
        cout << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}