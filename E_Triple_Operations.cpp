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
vector<ll> base(N, 0);
vector<ll> pref(N, 0);

void init() {
    for (int i = 1; i < N; i++) {
        ll temp = i;
        ll cnt = 0;
        while (temp > 0) {
            temp /= 3;
            cnt++;
        }
        base[i] = cnt;
    }
    pref[0] = base[0];
    for (int i = 1; i < N; i++) {
        pref[i] = pref[i - 1] + base[i];
    }
}

void solve(){
    ll l, r;
    cin >> l >> r;
    ll i = 1;
    ll start = l;

    ll cnt = base[start];
    cnt += cnt;

    // for (int j = l + 1; j <= r; j++) {
    //     cnt += base[j];
    // }

    cnt += pref[r] - pref[l]; 
  
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
    init();
    while(t--) {
        solve();
    }
    return 0;
}