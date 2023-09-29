#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
ll w, h, n;

bool pre(ll mid){
    ll nm1 = mid/w;
    ll nm2 = mid/h;
    return nm1 * nm2 >= n;
}


void solve(){
    cin >> w >> h >> n;
    ll l = 0;
    ll r = 1;

    while(pre(r) == false){
        r *= 2;
    } 

    while(r - l > 1){
        ll mid = l + (r-l)/2;
        if(pre(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout << r << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}