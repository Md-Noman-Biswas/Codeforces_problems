#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    int cnt = 0;
    vector<ll> arr(n+5,0);
    for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++){
        if(arr[i] == i){
            cnt++;
        }
    }
    int ans = cnt/2;
    if(cnt%2 == 0){
        cout << ans << "\n";
    }else{
        cout << ++ans << "\n";
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