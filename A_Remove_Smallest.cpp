#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n; 
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
    int cnt = 0;
    sort(arr,arr+n);
    bool ans = true;
    for(int i=1; i<n; i++){
         ans &= (arr[i] - arr[i-1] <= 1);
        //cout << cnt << "\n";
    }
    if(ans) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}