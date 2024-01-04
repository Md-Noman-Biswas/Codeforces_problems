#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.first < p2.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    ll max_price = 0;
    for(int i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        max_price = max(max_price, x);
        v.pb({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=1; i<n; i++){
        if(v[i].second < v[i-1].second){
            cout << "Happy Alex" << nl;
            return;
        }
    }
    cout << "Poor Alex" << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}