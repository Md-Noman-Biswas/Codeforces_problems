#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int l = 0;
    int r = 0;
    ll sum = -1;
    int cnt = 0;
    while(l < n){
        sum &= arr[l];
        if(sum == 0){
            sum = -1;
            cnt++;
        }
        l++;
    }
    if(cnt == 0) cnt = 1;
    cout << cnt << nl;
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