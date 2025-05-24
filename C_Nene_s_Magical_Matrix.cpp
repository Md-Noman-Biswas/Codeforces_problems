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
const int N = 505;
const int INF = 1e9 + 10;
vector<ll> sums(N + 1, 0);

void pre(ll n){
    for(int i = 1; i <= N; i++){
        sums[i] = sums[i - 1] + i;
    }
}

void solve(){
    ll n;
    cin >> n;
    ll ope = 0;
    vector<vector<ll>> arr(n, vector<ll> (n, 0));
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans += i * (2 * i - 1);
    }
    cout << ans << " " << 2 * n << nl;
    for(int i = n; i > 0; i--){
        cout << 1 << " " << i << " ";
        for(int j = 1; j <= n; j++) cout << j << " ";
        cout << nl;
        cout << 2 << " " << i << " ";
        for(int j = 1; j <= n; j++) cout << j << " ";
        cout << nl;
    }
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
    pre(N);
    while(t--) {
        solve();
    }
    return 0;
}