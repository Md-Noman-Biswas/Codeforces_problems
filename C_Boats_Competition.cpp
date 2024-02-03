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
    vector<ll> arr(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++) cin >> arr[i], mp[arr[i]]++;

    ll cnt = 0;
    ll ans = llmn;
    for(int i = 1; i <= 2 * n; i++){
        cnt = 0;
        for(auto it: mp){
            ll xd = i - it.first;
            if(xd > 0 && mp.count(xd)){
                cnt += min(mp[xd], it.second);
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans/2 << nl;
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