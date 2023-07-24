#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ll ans = 0;
    sort(arr.begin(), arr.end());
    // if(n == 1){
    //     cout << ans << "\n";
    // }else{
    //     sort(arr.begin(), arr.end());
    // ans = (arr[n-1] - arr[0]) + (arr[n-2] - arr[1]);
    // cout << ans << "\n";
    // }
    ll l = 0;
    ll r = n-1;
    while(r - l >= 1){
        ans += (arr[r] - arr[l]);
        r--;
        l++;
        //cout << ans << "s" << "\n";
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