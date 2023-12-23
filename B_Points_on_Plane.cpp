#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll sqr(ll n){
    ll x = sqrt(n) + 2;
    while(x*x > n) x--;
    return x;
}

void solve(){
    ll n;
    cin >> n;
    cout << sqr(n-1) << nl;  
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