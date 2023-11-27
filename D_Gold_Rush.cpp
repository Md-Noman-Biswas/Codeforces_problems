#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

map<ll, bool> mp;

bool curse(ll n, ll m){
    mp[n] = true;
    if(n == m) return true;
    if(n%3 != 0) return false;
    return (curse(n/3, m) || curse(2*1LL*n/3, m)); 
}

void solve(){
    ll n, m;
    cin >> n >> m;
    if(curse(n,m)){
        cout << "YES" << nl;
    }else{
        cout << "NO" << nl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        mp.clear();
        solve();
    }
    return 0;
}