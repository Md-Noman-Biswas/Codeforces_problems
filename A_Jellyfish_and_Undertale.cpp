#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> arr(n);
    ll ans = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] <= a - 1){
            ans += arr[i];
        }else{
            ans += (a-1);
        }
    }
    ans += min(b,a);
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