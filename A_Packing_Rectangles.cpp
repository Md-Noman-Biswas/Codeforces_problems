#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
ll w, h, n;

bool f(ll mid){
    ll x = mid/w;
    ll y = mid/h;
    return x * y >= n;
}

void solve(){
    cin >> w >> h >> n;
    ll l = 0;
<<<<<<< HEAD
    ll r = 1e7;
    int ans;
=======
    ll r = 1;
    while(f(r) == false){
        r *= 2;
    }
>>>>>>> 5b033576266dbccfc5656c3126a4e00433a98ee9
    while(l < r){
        ll mid = l + (r-l)/2;
        if(f(mid)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << l << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}