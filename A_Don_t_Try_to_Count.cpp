#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;



void solve(){
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    ll cnt = 0;
    for (int i = 0; i < 10; i++) {
        bool found = false;
        for (int j = 0; j < x.size(); j++) {
            ll p = j, q = 0;
            bool flag = true;
            while (p < x.size() && q < s.size()) {
                if (x[p] != s[q]) {
                    flag = false;
                    break;
                }
                p++;
                q++;
            }
            if (q != s.size()) flag = false;

            if (flag) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << cnt << nl;
            return;
        }
        else {
            x += x;
            cnt++;
        }
    }

    cout << -1 << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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