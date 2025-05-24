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
const int INF = 1e9 + 10;

void solve(){
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<ll> ind;
    vector<ll> viss(n, 0);
    while(m--){
        ll x;
        cin >> x;
        --x;
        if(!viss[x]) ind.push_back(x);
        viss[x] = 1;
    }
    string s2;
    cin >> s2;
    sort(ind.begin(), ind.end());
    sort(s2.begin(), s2.end());
    map<ll, char> mp;
    for(int i = 0; i < ind.size(); i++){
        mp[ind[i]] = s2[i];
    }
    vector<ll> vis(n, 0);
    for(auto it: ind){
        //cout << it << " ";
        s[it] = mp[it];
    }
    cout << s << nl;
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