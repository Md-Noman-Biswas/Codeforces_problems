#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 998244353
const int N = 1e5 + 7;
const int INF = 1e9 + 10;


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];   
    if (n == 1) {
        if (arr[0] == 0) {
            cout << 2 << nl;
        }
        else {
            cout << 1 << nl;
        }
        return;
    }
    //0->honest
    //1->liar
    map<vector<ll>, ll> odp;
    if (arr[0] != 0) {
        odp[{1, 1}] = 1;
    }
    else {
        odp[{0, 0}] = 1;
        odp[{1, 1}] = 1;
    }
    
    for (int i = 1; i < n; i++) {
        map<vector<ll>, ll> ndp;
        //honest
        ndp[{arr[i], 0}] = (odp[{arr[i], 1}] + odp[{arr[i], 0}]) % mod;
        //liar
        ndp[{arr[i - 1] + 1, 1}] = odp[{arr[i - 1], 0}];
        odp = ndp; 
    }

    cout << (odp[{arr[n - 2] + 1, 1}] + odp[{arr[n - 1], 0}]) % mod << nl;
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