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
const int N = 2e5 + 7;
const int INF = 1e9 + 10;
ll n, c;
vector<ll> arr(N);

bool predicate(ll mid){
    ll total = 0;
    for(int i = 0; i < n; i++){
        ll temp = arr[i] + (2 * mid);
        total += (temp * temp);
        if(total > c) return false;
    }
    return true;
}

void solve(){
    cin >> n >> c;
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll l = 0;
    ll r = 1e10;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
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