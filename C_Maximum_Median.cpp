#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 2e5 + 9;


ll n, k;
vector<int> arr(N);

bool validMedian(ll mid){
    ll ope = 0;
    for(int i = n/2; i<n; i++){
        if(arr[i] < mid){
            ope += (mid - arr[i]);
        }
    }
    return ope <= k;
}


void solve(){
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.begin() + n); // has to specify n, cause otherwise the defaultly initialised 0 values will create problem.

    ll l = 1;
    ll h = 2e9;
    ll ans;

    while(l <= h){ //doesn't work unless used this type of condition
        ll mid = (l + h)/2;
        if(validMedian(mid)){
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
    solve();
    return 0;
}