#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n, d; 
    cin >> n >> d;
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'B'){
            ans++;
            i += (d-1);
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
    while(t--) {
        solve();
    }
    return 0;
}