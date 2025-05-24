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

bool test (ll i, string &s) {
    bool ok = true;
    ll res = 0;
    ll curr = i;
    for (int j = 0; j < s.size(); j++) {
        res++;
        if (s[j] == '+') {
            curr++;
        }
        else {
            curr--;
        }
        if (curr < 0) {
            ok = false;
            break;
        }
    }
    return ok;
}

void solve(){
    string s;
    cin >> s;
    
    map<char, ll> mp;

    for (auto it: s) {
        mp[it]++;
    }

    ll minus = mp['-'] - mp['+'];
    //cout << minus << nl;

    if (minus <= 0) {
        cout << s.size() << nl;
    }
    else {
        ll res = 2 * mp['+'];
        for (int i = 0; i < minus; i++) {
            res += (i + 1);
        }
        res += s.size();
        cout << res << nl;
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