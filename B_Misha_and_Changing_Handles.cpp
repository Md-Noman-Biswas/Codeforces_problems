#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int q;
    cin >> q;
    unordered_map<string, string> mp;
    string old, neww;
    while(q--){
        cin >> old >> neww;
        if(mp.count(old) == 0){
            mp[neww] = old;
        }else{
            mp[neww] = mp[old];
            mp.erase(old);
        }
    }
    cout << mp.size() << "\n";
    for(auto it=mp.begin(); it != mp.end(); it++){
        cout << it->second << " " << it->first << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}