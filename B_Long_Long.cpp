#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    ll positive = 0;
    vector<int> arr(n+1,0);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] >= 0){
            positive++;
        }
    }
    if(positive == n-1){
        cout << 0 << "\n";
        return;
    }
    ll i = 0;
    ll cnt = 0;
    while(i < n){
        // if(arr[i] == 0){
        //     i++;
        //     break;
        // }
        if(arr[i] < 0){
            for(int ind = i+1; ind <= n; ind++){
                if(arr[ind] <= 0){
                    continue;
                }else{
                    cnt++;
                    break;
                }
            }
        }
        i++;
    }
    if(cnt == 0){
        cout << 1 << "\n";
    }else{
        cout << cnt << "\n";
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