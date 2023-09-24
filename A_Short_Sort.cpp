#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    string s;
    cin >> s;
    int v=0;
    if(s[0] != 'a'){
        v++;
    }
    if(s[1] != 'b'){
        v++;
    }
    if(s[2] != 'c'){
        v++;
    }
    if(v > 2){
        cout << "NO" << nl;
    }else{
        cout << "YES" << nl;
    }
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