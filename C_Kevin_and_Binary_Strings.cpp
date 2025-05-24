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
    string s;
    cin >> s;
    ll pivot = -1;
    ll n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            pivot = i;
            break;
        }
    }    
    string current;
    for (int i = pivot; i < n; i++) {
        current.push_back(s[i]);
    }
    // cout << current << nl;
    // cout << pivot << nl;
    // cout << n - pivot << nl;
    ll sz = n - pivot - 1;
    pair<ll, ll> p1;
    string ans = "";
    for (int i = 0; i + sz < n; i++) {
        ll m = i;
        ll p = 0;
        string last = "";
        while (p < current.size()) {
            // cout << s[m];
            if (s[m] == current[p]) last.push_back('0');
            else last.push_back('1');
            m++;
            p++;
        }
        // cout << nl;
        // cout << last << nl;
        if (ans < last) {
            p1.first = i;
            p1.second = i + sz;
            ans = last;
        }
    }
    // cout << ans << nl;
    cout << 1 << " " << n << " ";
    cout << ++p1.first << " " << ++p1.second << nl;
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