#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    bool flag = 0;
    int p=0;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
        char z = s[i];
        while(s[i] == z){
            i++;
        }
        i--;
        if(mp[z] > 1) flag = 1;
    }
    if(flag == 1) cout << "NO" << "\n";
    else cout << "YES" << "\n";

 
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