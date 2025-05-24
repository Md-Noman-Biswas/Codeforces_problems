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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    deque<pair<ll, ll>> remestered;
    vector<ll> hsh(1001, 0);
    for(int i = n - 1; i >= 0; i--){
        if(!hsh[arr[i]]){
            remestered.push_front({arr[i], i});
            hsh[arr[i]] = 1;
        }
    }
    // for(auto it: remestered){
    //     cout << it.first << " ";
    // }
    // cout << nl;
    ll ans = llmn;
    for(int i = 0; i < remestered.size(); i++){
        for(int j = 0; j < remestered.size(); j++){
            if(__gcd(remestered[i].first, remestered[j].first) == 1){
                ll temp = remestered[i].second + remestered[j].second + 2;
                ans = max(ans, temp);
            }
        }
    }
    if(ans == llmn) ans = -1;
    cout << ans << nl;
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