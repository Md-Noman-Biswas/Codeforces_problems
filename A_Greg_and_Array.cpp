#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1e5+7;

vector<ll> arr(N);
vector<ll> pref(N);
vector<ll> queries(N);


void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++) cin >> arr[i];

    vector<tuple<pair<ll, ll>, ll>> v;

    for(int i=0; i<m; i++){
        ll l, r, d;
        cin >> l >> r >> d;
        v.push_back({{l,r}, d});
    }
    int temp = k;
    while(k--){
        ll x, y;
        cin >> x >> y;
        queries[x-1]++;
        queries[y]--;
    }

    for(int i=1; i<=N; i++){
        queries[i] += queries[i-1];
    }

    for(int i=0; i<m; i++){
        get<1>(v[i]) *= queries[i];
    }

    for(int i=0; i<m; i++){
        ll l, r, d;
        l = get<0>(v[i]).first;
        r = get<0>(v[i]).second;
        d = get<1>(v[i]);
        pref[l-1] += d;
        pref[r] -= d; 
    }

    for(int i=1; i<n; i++){
        pref[i] += pref[i-1];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] + pref[i] << " ";
    }

    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}