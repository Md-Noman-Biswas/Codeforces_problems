#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n);
    vector<ll> brr(m);
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int j=0; j<m; j++) cin >> brr[j];
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    ll ans = 0;
    if(k % 2 == 1){
        if(arr[0] < brr[m-1]){
            swap(arr[0], brr[m-1]);
            sort(arr.begin(), arr.end());
            sort(brr.begin(), brr.end());
        }
    }else{
        if(arr[0] < brr[m-1]){
            swap(arr[0], brr[m-1]);
            sort(arr.begin(), arr.end());
            sort(brr.begin(), brr.end());
        }
        if(brr[0] < arr[n-1]){
            swap(brr[0], arr[n-1]);
            sort(arr.begin(), arr.end());
            sort(brr.begin(), brr.end());
        }
    }
    for(int i=0; i<n; i++){
        ans += arr[i];
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