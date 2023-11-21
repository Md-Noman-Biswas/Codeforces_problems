#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

int n, x, y;

bool pred(ll mid){
    if(mid < min(x,y)) return false;
    ll rem = mid - min(x,y);
    ll cnt = 1;
    cnt += (rem/x + rem/y);
    return cnt >= n;
}



void solve(){
    cin >> n >> x >> y;
    ll l = 0;
    ll h = max(x,y) * n;
    while(h - l > 1){
        ll mid = (h+l)/2;
        if(pred(mid)){
            h = mid;
        }else{
            l = mid;
        }
    }
    cout << h << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}