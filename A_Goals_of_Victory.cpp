#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll positive = 0;
    ll negative = 0;
    ll cnt1 = 0;
    ll cnt2 = 0;
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            positive += arr[i];
        }else{
            negative += arr[i];
        }
    }
    if(abs(positive) > abs(negative)){
        cout << (positive*-1) + (negative*-1) << nl;
    }else{
        cout << (negative*-1) - positive << nl;
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