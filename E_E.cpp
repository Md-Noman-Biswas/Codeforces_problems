#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    if(s.size() > 10){
        int length = s.size() - 2;
        cout << s[0] << length << s.back() << endl;
        }
    else cout << s << endl; 
}

int main(){
    int n;
    cin >> n;
    while(n--){
    solve();
    }
}