#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll k, x;

bool predicate(ll mid){
    ll emotes = mid * mid - (mid * (mid - 1)/2);
    return emotes <= x;
}

void solve(){
    cin >> k >> x;
    ll l = 0;
    ll r = k * k;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
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