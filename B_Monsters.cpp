#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll, ll> v1, pair<ll, ll> v2){
    if(v1.first == v2.first) return v1.second < v2.second;
    else return v1.first > v2.first; 
}
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> ans;
    vector<pair<ll, ll>> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x % k == 0){
            ans.push_back(i+1);
        }else{
            x %= k;
            v.push_back({x, i+1});
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it: v){
        ans.push_back(it.second);
    }
    for(auto it: ans){
        cout << it << " ";
    }
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}