#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9+7;
#define ll long long
int mult(vector<ll> &arr){
    int sz = arr.size();
    int ans = 1;
    for(int i=0; i<sz; i++){
        ans = ((ans % M) * 1LL *(arr[i] % M)) % M; 
    }
    return ans;
}
void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << mult(arr) << "\n";
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