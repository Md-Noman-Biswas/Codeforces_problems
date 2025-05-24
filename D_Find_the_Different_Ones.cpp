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
    vector<ll> arr(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    map<ll, ll> mp;
    mp[n] = -1;
    for(int i = n - 1; i > 0; i--){
        if(arr[i] != arr[i + 1]){
            mp[i] = i + 1;
        }else{
            mp[i] = mp[i + 1];
        }
    }
    int q;
    cin >> q;
    while(q--){
        ll l, r;
        cin >> l >> r;
        if(mp[l] <= r && mp[l] != -1){
            cout << l << " " << mp[l] << nl;
        }else{
            cout << -1 << " " << -1 << nl;
        }
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