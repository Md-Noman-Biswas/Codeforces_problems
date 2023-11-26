#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    bool flag = false;
    int cntL = 0;
    int cntF = 0;
    vector<ll> suffix(n, 0);
    suffix[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] + (arr[i] == arr[n-1]);
    }
    // for(auto it: suffix){
    //     cout << it << " ";
    // }
        for(int i=0; i<n; i++){
        if(arr[i] == arr[n-1]){
            cntL++;
        }
        if(arr[i] == arr[0]){
            cntF++;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == arr[0]){
            cnt1++;
        }
        if(cnt1 % k == 0 && suffix[i+1] >= k){
            cout << "YES" << nl;
            return;
        }
    }
    if(arr[0] == arr[n-1] && cntF >= k){
        cout << "YES" << nl;
        return;
    }
    cout << "NO" << nl;
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