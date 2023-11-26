#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    int even = 0;
    ll ans = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            even++;
        }
        if(arr[i] % k == 0) ans = min(ans, 0LL);
        ans = min(ans, k - arr[i] % k);
    }
    if(even == 0){
        if(k == 4) ans = min(ans, 2LL);
        if(k == 2) ans = min(ans, 1LL);
    }
    if(k == 4){
        if(even >= 2) ans = min(ans, 0LL);
        if(even == 1) ans = min(ans, 1LL);
    }
    cout << ans << nl;
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