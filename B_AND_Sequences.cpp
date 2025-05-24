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

vector<ll> fact(N, 0);

void pre() {
    fact[0] = 1;
    fact[1] = 1;
    for (ll i = 2; i < N; i++) {
        fact[i] = ((fact[i - 1] % mod) * (i % mod)) % mod;
    }
}


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll mn = llmx;
    map<ll, ll> mp;


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        mn = min(mn, arr[i]);
    }   
    for (int i = 0; i < n; i++) {
        if ((mn & arr[i]) != mn) {
            cout << 0 << nl;
            return;
        }
    }
    cout << ((mp[mn] * (mp[mn] - 1)) % mod * fact[n - 2] % mod) % mod << nl;
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
    pre();
    while(t--) {
        solve();
    }
    return 0;
}