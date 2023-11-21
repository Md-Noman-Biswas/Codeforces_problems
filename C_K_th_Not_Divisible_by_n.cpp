#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll n, k;

bool valid(ll mid){
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
        if(valid(mid)){
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
        }
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