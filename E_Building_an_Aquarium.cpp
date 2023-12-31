#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1e6+10;
ll n, x;
vector<ll> arr(N);

bool predicate(ll mid){
    ll water = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < mid){
            water += mid - arr[i];
        }
    }
    return water <= x;
}


void solve(){
    cin >> n >> x;
    for(int i=0; i<n; i++) cin >> arr[i];
    ll l = 0;
    ll h = 1e10;
    ll ans = 0;
    while(l <= h){
        ll mid = l + (h-l)/2;
        if(predicate(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            h = mid - 1;
        }
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