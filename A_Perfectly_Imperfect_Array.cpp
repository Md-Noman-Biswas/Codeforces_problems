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
    for(int i=0; i<n; i++){
        int v = (arr[i])/sqrt(arr[i]);
        if(v*v != arr[i]) cnt++;
    }
    if(cnt > 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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