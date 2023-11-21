#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"


bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}


void solve(){
    ll n, p;
    cin >> n >> p;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    vector<ll> brr(n);
    for(int i=0; i<n; i++) cin >> brr[i];

    vector<pair<ll, ll>> v;
    for(int i=0; i<n; i++){
        v.push_back(make_pair(arr[i], min(brr[i], p)));
    }
    sort(v.begin(), v.end(), cmp);

    // for(auto it: v){
    //     cout << it.first << " " << it.second << nl;
    // }

    ll cost = p;
    ll person = n-1;
    int i=0;
    while(person){
        cost += min(v[i].first, person) * v[i].second;
        person -= min(v[i].first, person);
        i++;
    }
    cout << cost << nl;
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