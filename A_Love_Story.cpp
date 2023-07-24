#include<bits/stdc++.h>
using namespace std;
void solve(){
    // char s[10];
    // scanf("%s", &s);
    // int cnt = 0;
    // if(s[0] != 'c' && s[1] != 'o' && s[2] != 'd' && s[3] != 'e' && s[4] != 'f' && s[5] != 'o' && s[6] != 'r' && s[7] != 'c' || s[8] != 'e' || s[9] = 's'){
    //         cnt++;
    //     }
    string s1;
    string s2;
    s1 = "codeforces";
    cin >> s2;
    int cnt=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i] != s2[i]){
            cnt++;
        }
    }
    cout << cnt << "\n";
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