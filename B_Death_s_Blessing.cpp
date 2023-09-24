#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, int> a, pair<int, int> b){
    return b.second > a.second;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) cin >> v[i].first;
    for(int i=0; i<n; i++) cin >> v[i].second;
    sort(v.begin(), v.end(), cmp);
    ll ans = 0;
    for(auto it: v){
        ans += (it.first + it.second);
    }
    cout << ans - v[n-1].second << "\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}