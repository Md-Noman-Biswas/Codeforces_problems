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
    string s, t;
    cin >> s >> t;
    ll l = 0, r = 0;
    ll match = 0;

    while (r < s.size() && l < t.size()) {
        if (t[l] == s[r]) {
            match++;
            l++, r++;
        }
        else if (s[r] == '?') {
            s[r] = t[l];
            match++;
            l++;
            r++;
        }
        else {
            r++;
        }
    }   
    //cout << match << nl;
    if (match == t.size()) {
        YES;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?') {
                s[i] = 'x';
            }
        }
        cout << s << nl;
    }
    else {
        NO;
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