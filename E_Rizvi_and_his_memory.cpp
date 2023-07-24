#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,d;
    cin >> n >> d;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    cout << arr[n-1] - arr[0] << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}