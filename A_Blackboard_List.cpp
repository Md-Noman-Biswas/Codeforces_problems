#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    bool flag = false;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ll ans;
    sort(arr.begin(), arr.end());
    if(arr[0] < 0){
        ans = arr[0];
    }else{
        ans = arr[n-1];
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