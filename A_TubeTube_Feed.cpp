#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, t;
    cin >> n >> t;
    int ans=0;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(n);
    for(int i=0; i<n; i++) cin >> b[i];
    int x = -1;
    for(int i=0; i<n; i++){
        if(a[i]+i <= t){
            if(b[i] > x){
                x = b[i];
                ans = i+1;
            }
        }
    }
    if(ans == 0){
        cout << -1 << "\n";
    }else cout << ans << "\n";
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