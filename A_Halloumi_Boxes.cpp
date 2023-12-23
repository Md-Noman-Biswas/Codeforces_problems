#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    bool flag = is_sorted(arr.begin(), arr.end());
    if(flag){
        cout << "YES" << nl;
        return;
    }
    if(k == 1){
        cout << "NO" << nl;
    }else{
        cout << "YES" << nl;
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
