#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> ans;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        ans.push_back(n - arr[i] + 1);
    }
    for(auto it: ans){
        cout << it << " ";
    }
    cout << "\n";

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