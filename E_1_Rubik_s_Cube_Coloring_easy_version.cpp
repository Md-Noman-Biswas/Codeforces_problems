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

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL *a) % mod;
        b = b >> 1;
    }
    return ans;
}

void solve(){
    ll n;
    cin >> n;
    ll pw = (1LL << n) - 1;
    ll ans = 6;
    ans = (ans * (power(4, pw - 1))) % mod;
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
    solve();
    return 0;
}