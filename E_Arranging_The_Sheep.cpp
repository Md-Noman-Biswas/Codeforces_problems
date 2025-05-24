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

ll check(string &s, ll mid) {
    ll last = mid;
    ll ope = 0;
    for (int i = mid - 1; i >= 0; i--) {
        if (s[i] == '*') {
            ope += last - i - 1;
            last--;
        }
    }

    last = mid;
    for (int i = mid + 1; i < s.size(); i++) {
        if (s[i] == '*') {
            ope += i - last - 1;
            last++;
        }
    }
    return ope;
}

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> empty, sheep;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') empty.push_back(i);
        else sheep.push_back(i);
    }
    ll stars = sheep.size();
    if (stars == 0) {
        cout << 0 << nl;
        return;
    }
    ll ans = 0;
    ll mid = sheep[stars / 2];
    ans = check(s, mid);
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
    while(t--) {
        solve();
    }
    return 0;
}