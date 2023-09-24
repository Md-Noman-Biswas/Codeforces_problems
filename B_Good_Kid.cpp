#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<int> arr(n);
    ll v = INT_MAX;
    int ind = -1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] < v){
            v = arr[i];
            ind = i;
        }
    }
    arr[ind]++;
    ll ans = 1;
    for(int i=0; i<n; i++){
        ans *= arr[i];
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