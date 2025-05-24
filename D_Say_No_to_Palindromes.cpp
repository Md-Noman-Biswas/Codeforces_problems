#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, q;
    cin >> n >> q;
    string s; cin >> s;
    string t = "abc";
    string beautiful[6];

    ll id = 0;
    do {
        for (int i = 0; i < n; i++) {
            beautiful[id].push_back(t[i % 3]);
        }
        id++;
    } while (next_permutation(t.begin(), t.end())); 

    vector<vector<ll>> pref(6, vector<ll> (n + 1, 0));

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < n; j++) {
            pref[i][j] = (beautiful[i][j] != s[j]);
            if (j) {
                pref[i][j] = pref[i][j - 1] + (beautiful[i][j] != s[j]);
            }
        }
    }

    while (q--) {
        ll l, r;
        cin >> l >> r;
        --l, --r;
        ll mn = llmx;
        for (int i = 0; i < 6; i++) {
            (l == 0) ? mn = min(mn, pref[i][r]) : mn = min(mn, pref[i][r] - pref[i][l - 1]);
        }
        cout << mn << nl;
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
    solve();
    return 0;
}