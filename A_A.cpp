#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    vector<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U'  || s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y'){
            continue;
        }
        else{
            st.push_back('.');
            char ch = tolower(s[i]);
            st.push_back(ch);
        }
    }
    for(auto it: st){
        cout << it;
    }
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}