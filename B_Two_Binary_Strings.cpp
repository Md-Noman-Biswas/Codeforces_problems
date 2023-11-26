#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int ind_of_1;
    int ind_of_1_in2;
    bool flag = false;
    for(int i=0; i<s1.size(); i++){
        if(s1[i] == '0' && s1[i+1] == '1' && s2[i] == '0' && s2[i+1] == '1'){
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" << nl;
    else cout << "NO" << nl;
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