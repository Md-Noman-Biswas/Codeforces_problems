#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool flag(int n, int m, int k){
    for(int i=1; i<=m; i++){
        if(i*m == k){
            return true;
        }else{
            return false;
        }
    }
}
void solve(){
    int n,m,k,h;
    cin >> n >> m >> k >> h;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        int temp = abs(arr[i] - h);
        if(flag(temp, n, k) == true && (temp%k == 0)){
            ans++;
        }
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