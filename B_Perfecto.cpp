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

bool isPerfect(ll n) {
    ll xd = sqrt(n);
    return xd * xd == n;
}


void solve(){
    ll n;
    cin >> n;
    ll sum = 0;
    vector<ll> ans;
    vector<ll> hsh(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (!isPerfect(sum + i)) {
            sum += i;
            ans.push_back(i);
            hsh[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!hsh[i] && !isPerfect(sum + i)) {
            ans.push_back(i);
            sum += i;
            hsh[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!hsh[i] && !isPerfect(sum + i)) {
            ans.push_back(i);
            sum += i;
            hsh[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!hsh[i]) {
            ans.push_back(i);
            sum += i;
            hsh[i] = 1;
        }
    }

    vector<ll> pref(n, 0);
    pref[0] = ans[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + ans[i];
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (isPerfect(pref[i])) cnt++;
    }
    if (cnt) {
        cout << -1 << nl;
    }
    else {
        // cout << cnt <<nl;
        for (auto it: ans) cout << it << " ";
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
    while(t--) {
        solve();
    }
    return 0;
}