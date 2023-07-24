#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n+1);
    for(ll i=0; i<n; i++) cin >> arr[i];
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans = max(ans, arr[i]*arr[i+1]);
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