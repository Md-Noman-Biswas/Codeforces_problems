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

void solve() {
    string p, s;
    cin >> p >> s;

    ll l = 0, r = 0;
    bool flag = true;

    while (l < p.size() && r < s.size()) {
        if (p[l] != s[r]) {
            flag = false;
            break;
        }

        char ch = p[l];
        ll cnt1 = 0, cnt2 = 0;

        while (l < p.size() && p[l] == ch) {
            cnt1++;
            l++;
        }
  
        while (r < s.size() && s[r] == ch) {
            cnt2++;
            r++;
        }

        if (cnt2 > 2 * cnt1 || cnt2 < cnt1) {
            flag = false;
            break;
        }
    }

    if (l < p.size() || r < s.size()) {
        flag = false;
    }


    if (flag) YES;
    else NO;
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