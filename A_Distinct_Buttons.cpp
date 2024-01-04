#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    ll u = 0;
    ll d = 0;
    ll r = 0;
    ll l = 0;
    while(n--){
        ll x, y;
        cin >> x >> y;
        if(x > 0) r++;
        if(x < 0) l++;
        if(y > 0) u++;
        if(y < 0) d++;
    }   

    if(u*d*l*r == 0){
        YES;
    }else{
        NO;
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