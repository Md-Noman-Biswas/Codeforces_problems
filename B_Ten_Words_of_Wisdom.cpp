#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int a, b;
    int i=1;
    int ans, quality = 0;
    while(n--){
        cin >> a >> b;
        if(a <= 10 && b > quality){
            ans = i;
            quality = b;
        }
        i++;
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