#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    string s;
    map<string, int> mp;
    while(n--){
        cin >> s;
        mp[s]++;
        if(mp[s] > 1){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}