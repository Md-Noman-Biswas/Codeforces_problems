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

bool check(vector<ll> &sorted_till_here, string &s, ll i) {
    return (!sorted_till_here[i] && s[i] == 'L' && s[i + 1] == 'R');
}

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> sorted_till_here(n);
    ll mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        sorted_till_here[i] = (mx == i + 1);
    }
    // for (auto it: sorted_till_here) cout << it << " ";
    // cout << nl;
    string s;
    cin >> s;
    ll total = 0;
    for (int i = 0; i < n; i++) {
        // cout << i << " -> " << check(sorted_till_here, s, i) << nl;
        total += check(sorted_till_here, s, i);
    }
    // cout << total << nl;

    while (q--) {
        ll ind;
        cin >> ind; --ind;

        total -= check(sorted_till_here, s, ind - 1);
        total -= check(sorted_till_here, s, ind);
        if (s[ind] == 'L') s[ind] = 'R';
        else s[ind] = 'L';
        total += check(sorted_till_here, s, ind - 1);
        total += check(sorted_till_here, s, ind);
        // cout << s << nl;
        if (total) NO;
        else YES;
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