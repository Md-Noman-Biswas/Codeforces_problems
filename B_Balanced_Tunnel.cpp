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
    vector<ll> enter(n), exit(n);
    map<ll, ll> in, out;
    for (int i = 0; i < n; i++) {
        cin >> enter[i];
        in[enter[i]] = i;
    }   
    for (int i = 0; i < n; i++) {
        cin >> exit[i];
        out[exit[i]] = i;
    }
    ll cnt = 0;
    ll diff = llmn;
    for (int i = 1; i <= n; i++) {
        ll before = in[i];
        ll after = out[i];

        if (after - before < 0) cnt++;
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
    solve();
    return 0;
}