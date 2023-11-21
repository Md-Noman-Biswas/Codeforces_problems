#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while(q--){
        ll l, k;
        cin >> l >> k;
        int ans = -1;
        for(int j = l-1; j<n; j++){
            ans &= arr[j];
            if(ans >= k){
                ans = j + 1;
            }
        }
        cout << ans << " ";
    }
    cout << nl;
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