#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll n, k;

bool valid(ll mid){
<<<<<<< HEAD
    ll temp = mid / n;
    return k >= (mid - temp);
}


void solve(){
    cin >> n >> k;
    ll l = 0;
    ll h = 1e9 + 7;
    ll ans;
    while(h - l > 0){
        ll mid = (h + l)/2;
=======
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
>>>>>>> 5b033576266dbccfc5656c3126a4e00433a98ee9
        if(valid(mid)){
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }   
<<<<<<< HEAD
=======
    cout << ans << nl;
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