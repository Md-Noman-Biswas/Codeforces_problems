#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> p;
    ll range = n;
    ll l = llmn;
    ll r = llmx;
    while(n--){
        ll k, n;
        cin >> k >> n;
        p.pb({k, n});
    }
    vector<ll> temp;
    for(int i=0; i<range; i++){
        if(p[i].first == 1){
            l = max(p[i].second, l);
        }
        if(p[i].first == 2){
            r = min(p[i].second, r);
        }
        if(p[i].first == 3){
            temp.pb(p[i].second);
        }
    }
    bool valid[r - l + 1] = {0};
    cout << l  << " " << r << nl;
    for(int i=l; i<=r; i++){
        valid[i] = 1;
    }
    for(int i=0; i<temp.size(); i++){
        valid[temp[i]] = 0;
    }
    ll ans = 0;
    for(int i=0; i<r-l+1; i++){
        if(valid[i] == 1){
            cout << i << nl;
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