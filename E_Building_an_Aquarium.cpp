#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1e6+10;
ll n, x;
vector<ll> arr(N);


bool isWaterSufficient(ll mid){
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < mid){
            sum += (mid - arr[i]);
        }
    }
    return sum <= x;
}


void solve(){
    cin >> n >> x;
    for(int i=0; i<n; i++) cin >> arr[i];
    ll l = 0;
    ll h = 1e9+1;
    while(h - l > 1){
        ll mid = (h+l)/2;
        if(isWaterSufficient(mid)){
            l = mid;
        }else{
            h = mid-1;
        }
    }
    if(isWaterSufficient(h)){
        cout << h << nl;
    }else{
        cout << l << nl;
    }
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