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
        if(mp.find(s) == mp.end()){
            cout << 0 << "\n";
            // return;
        }else cout << mp[s] << "\n";
    }
    else if(op == 2){
        cin >> s;
        mp.erase(s);
        // mp.erase();
    }
    else if(op == 3){
        string l,r;
        cin >> l >> r;
        for(auto it=mp.lower_bound(l); it != mp.upper_bound(r); it++){
            if(it->first > r){
                break;
            }
            cout << it->first << " " << it->second << "\n";
        }
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