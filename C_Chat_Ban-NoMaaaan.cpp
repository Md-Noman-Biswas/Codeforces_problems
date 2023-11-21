#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll k, x;

bool predicate(ll mid){
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
}

void solve(){
    cin >> k >> x;
    ll l = 0;
    ll r = 2 * k - 1;
    ll ans = 0;
    if(k * k <= x){
        cout << 2 * k - 1 << nl;
        return;
    }
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ++ans << nl;
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