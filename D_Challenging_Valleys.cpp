#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n+2);
    arr[0] = INT_MAX;
    arr[n+1] = INT_MAX;
    for(int i=1; i<=n; i++) cin >> arr[i];
    int l = 1;
    int h = 1;
    int cnt = 0;
    while(h <= n){
        while(arr[h] == arr[h+1]){
            h++;
        }
        if(arr[l-1] > arr[l] && arr[h+1] > arr[h]){
            cnt++;
        }
        l = h + 1;
        h++;
    }
    if(cnt == 1) cout << "YES" << nl;
    else cout << "NO" << nl;
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