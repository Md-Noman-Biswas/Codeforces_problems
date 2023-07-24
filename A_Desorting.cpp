#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    ll ans = INT_MAX;
    for(ll i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            cout << 0 << "\n";
            return;
        }
        ll temp = 1 + (arr[i+1] - arr[i])/2;
        ans = min(ans, temp);
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