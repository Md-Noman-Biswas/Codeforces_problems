#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll a, b;
    cin >> a >> b;
    ll k1, k2;
    cin >> k1 >> k2;
    ll q1, q2;
    cin >> q1 >> q2;

    vector<ll> x = {a, a, -a, -a, b, -b, b, -b};
    vector<ll> y = {b, -b, b, -b, a, a, -a, -a};

    set<pair<ll, ll>> king;
    set<pair<ll, ll>> queen;

    for(int i=0; i<8; i++){
        king.insert(mp(k1 + x[i], k2 + y[i]));
        queen.insert(mp(q1 + x[i], q2 + y[i]));
    } 
    ll ans = 0;
    for (auto it : king) {
        if (queen.find(it) != queen.end()) {
            ans++;
        }
    }

    cout << ans << nl;
    
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