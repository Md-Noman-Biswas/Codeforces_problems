#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   ll n;
   cin >> n;
   vector<ll> arr(n);
   for(ll i=0; i<n; i++) cin >> arr[i];
   sort(arr.begin(), arr.end());
   cout << max(arr[0]*arr[1],arr[n-1]*arr[n-2]) << "\n";
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