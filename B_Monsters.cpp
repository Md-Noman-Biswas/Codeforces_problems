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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2){
    if(p1.first == p2.first) return p1.second < p2.second;
    return p1.first > p2.first;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> pr;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        x %= k;
        if(!x) x = k;
        pr.push_back({x, i + 1});
    }
    sort(pr.begin(), pr.end(), cmp);
    for(auto it: pr){
        cout << it.second << " ";
    }
    cout << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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