#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    for(int i=n-1; i>=0; ){
        if(s[i] != '0'){
        string new_s = s.substr(i,1);
            int x = stoi(new_s) - 1 + 'a';
            //cout << x << "\n";
            v.push_back(x);
            i--;
        }else{
            string new_s = s.substr(i-2,2);
            int x = stoi(new_s) - 1 + 'a';
            //cout << x << "\n";
            v.push_back(x);
            i -= 3;
        }
    }
    reverse(v.begin(), v.end());
    for(auto x: v){
        cout << x;
    }
    cout << "\n";
}
int main(){
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