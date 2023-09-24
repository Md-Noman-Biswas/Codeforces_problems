#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0;
    int r = n-1;
    while(l < n){
        if(s[l] != s[r]){
            l++;
            r--;
        }else{
            break;
        }
    }
    int ans = max(r-l+1, 0);
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}