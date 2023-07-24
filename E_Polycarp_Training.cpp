#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll cnt = 0;
    ll ind = 1;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        if(arr[i] >= ind){
            cnt++;
            ind++;
        }
    }
    cout << cnt << "\n";

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}