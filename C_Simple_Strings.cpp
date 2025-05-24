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

char func(char ch1, char ch2) {
    for (int i = 'a'; i <= 'z'; i++) {
        if (char(i) != ch1 && char(i) != ch2) {
            return char(i);
        }
    }
}

void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    for (int i = 1; i < s.size(); i++) {
        if (i + 1 < n) {
            if (s[i - 1] == s[i] && s[i] == s[i + 1]) {
                char temp = func(s[i - 1], s[i + 1]);
                s[i] = temp;
            }
            else if (s[i] == s[i - 1]) {
                char temp = func(s[i - 1], s[i + 1]);
                s[i] = temp;
            }
        }
        else {
            if (s[i] == s[i - 1]) {
                char temp = func(s[i - 1], s[i + 1]);
                s[i] = temp;
            }
        }
    }

    cout << s << nl;
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