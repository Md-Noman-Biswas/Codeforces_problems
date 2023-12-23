#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;


void solve(){
    string s;
    cin >> s;
    map<int, char> mp;
    stack<int> sml, bg;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'B'){
            if(bg.empty()) continue;
            int ind = bg.top();
            mp[ind] = '$';
            bg.pop();
            continue;
        }
        if(s[i] == 'b'){
            if(sml.empty()) continue;
            int ind = sml.top();
            mp[ind] = '$';
            sml.pop();
            continue;
        }
        mp[i] = s[i];
        if(int(s[i] > 90)) sml.push(i);
        else bg.push(i);
    }
    for(int i=0; i<s.size(); i++){
        if(mp.count(i) != 0 && mp[i] != '$'){
            cout << mp[i];
        }   
    }
    cout << nl;
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