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
    vector<ll> arr(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i] % m]++;
    }   
    ll cnt = 0;
    cnt += (mp[0] != 0);
    for(int i = 1; i < m; i++){
        if(mp[i]){
            ll temp = abs(mp[i] - mp[m - i]);
            if(temp <= 1){
                cnt++;
            }else{
                cnt += temp;
            }
            mp[m - i] = 0;
            mp[i] = 0;
        }
    }
    cout << cnt << nl;
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