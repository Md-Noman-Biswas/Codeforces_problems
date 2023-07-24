#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());
    //cout << s1 << "\n";
    string finS = s1 + s2;
    sort(finS.begin(), finS.end());
    if(s3 == finS){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}