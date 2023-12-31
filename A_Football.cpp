#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

bool cmp(pair<string, int> p1, pair<string, int> p2){
        return p1.second > p2.second;
}

void solve(){
    ll n;
    cin >> n;
    map<string, int> mp;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }
    vector<pair<string, int>> v;

    for(auto it: mp){
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
