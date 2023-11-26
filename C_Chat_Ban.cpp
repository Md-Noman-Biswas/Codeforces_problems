#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll k, x;

bool predicate(ll mid){
<<<<<<< HEAD
    ll emotes = mid * mid - (mid * (mid - 1)/2);
    return emotes <= x;
=======
    ll total_emotes = k*k;
    ll emotes = 0;
    if(mid <= k){
        emotes = mid * (mid + 1)/2;
    }else{
        ll temp = mid - k;
        ll lower_part = k - temp - 1;
        emotes = total_emotes - (lower_part * (lower_part + 1)/2);
    }
    return emotes < x;
>>>>>>> 5b033576266dbccfc5656c3126a4e00433a98ee9
}

void solve(){
    cin >> k >> x;
    ll l = 0;
<<<<<<< HEAD
    ll r = k * k;
    ll ans = 0;
=======
    ll r = 2 * k - 1;
    ll ans = 0;
    if(k * k <= x){
        cout << 2 * k - 1 << nl;
        return;
    }
>>>>>>> 5b033576266dbccfc5656c3126a4e00433a98ee9
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
<<<<<<< HEAD
    cout << ans << nl;
=======
    cout << ++ans << nl;
>>>>>>> 5b033576266dbccfc5656c3126a4e00433a98ee9
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