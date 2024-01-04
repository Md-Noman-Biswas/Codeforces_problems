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
    map<ll, ll> mp;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        mp[x]++;
    }
    ll mx = 0;
    for(auto it: mp){
        mx = max(it.second, mx);
    }

    if(mx == mp.size()){
        cout << mx - 1 << nl;
    }else{
        ll x = mp.size();
        cout << min(mx, x) << nl;
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