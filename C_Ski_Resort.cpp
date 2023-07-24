#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    vector<int> arr(n);
    ll cn = 0;
    ll ans = 0;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++){
        if(arr[i] <= q){
            cn++;
            if(i == n-1 || arr[i+1] > q){
                if(cn >= k){
                    ll v = cn - k + 1;
                    //cout << v << "\n";(
                    ans += (v*(v+1))/2;
                }
                cn = 0;
            }
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