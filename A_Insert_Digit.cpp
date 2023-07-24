#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, d;
    cin >> n >> d;
    string s; 
    cin >> s;
    string result;
    int i=0;
    while(i<n && d <= (s[i] -'0')){
        result.push_back(s[i]);
        i++;
    }
    result.push_back(char(d + '0'));
    while(i<n){
        result.push_back(s[i]);
        i++;
    }
    cout << result << "\n";
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