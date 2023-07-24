#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int l = count(s.begin(), s.end(), 'L');
    int r = count(s.begin(), s.end(), 'R');
    if(l == n || r == n){
        cout << -1 << "\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(s[i] == 'L' && s[i+1] == 'R'){
            ans = i+1;
            break;
        }
    }
    cout << ans << "\n";
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