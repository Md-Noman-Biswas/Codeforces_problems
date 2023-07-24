#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);
    if((arr[2] + arr[1]) >= 10){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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