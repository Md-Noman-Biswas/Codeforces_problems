#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,q;
    cin >> n >> q;
    ll arr[n+1] = {0};
    for(ll i=1; i<=n; i++) cin >> arr[i];
    ll pref[n+1] = {0};
    for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+arr[i];
        }
    // for(int i=0; i<n; i++){
    //     cout << pref[i] << "\n";
    // }
    while(q--){
        ll l,r,k;
        ll sum = pref[n];
        //cout << sum;
        cin >> l >> r >> k;
        sum -= (pref[r] - pref[l-1]);
        sum += ((r)-(l)+1)*k;
        //cout << sum << "\n";
        if(sum % 2 == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
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