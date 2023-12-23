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
    ll mx = 1;
    map<ll, ll> mp;
    for(int i=0; i<n-1; i++){
        ll v1, v2;
        cin >> v1 >> v2;
        mp[v1]++;
        mp[v2]++;
    }

    int cnt = 0;
    for(auto it: mp){
        if(it.second == 1){
            cnt++;
        }
    }
    cout << (cnt + 1)/2 << nl;
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