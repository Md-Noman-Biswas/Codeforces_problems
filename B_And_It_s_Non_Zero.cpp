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

vector<vector<ll>> bits(N, vector<ll> (32, 0));
vector<vector<ll>> pref(N, vector<ll> (32, 0));

void init() {
   
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 32; j++) {
            if ((i & (1 << j)) == 0) {
                bits[i][j]++;
            }
        }
    }
    //pref[0][0] = bits[0][0];
    for (int i = 0; i < 32; i++) {
        pref[0][i] = bits[0][i];
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 32; j++) {
            pref[i][j] = pref[i - 1][j] + bits[i][j];
        }
    }

    
}

void solve(){
    ll l, r;
    cin >> l >> r;
    ll ans = llmx;

    for (int i = 0; i < 32; i++) {
        //cout << pref[r][i] - pref[l - 1][i] << nl;
        ans = min(ans, pref[r][i] - pref[l - 1][i]);
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
    init();
    while(t--) {
        solve();
    }
    return 0;
}