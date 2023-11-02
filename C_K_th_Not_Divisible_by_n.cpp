#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll n, k;

bool valid(ll mid){
    ll not_divisible = mid - mid / n;
    return not_divisible >= k;
}

void solve(){
    cin >> n >> k;
    ll l = 1;
    ll h = 2e9;
    ll ans = 0;
    while(l <= h){
        ll mid = l + (h-l)/2;
        if(valid(mid)){
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
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