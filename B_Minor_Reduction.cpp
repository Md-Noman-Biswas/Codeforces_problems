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
    string temp;
    bool flag = false;
    ll ind1, ind2;
    for (int i = s.size() - 1; i > 0; i--) {
        ll t1 = s[i] - '0';
        ll t2 = s[i - 1] - '0';
        if (t1 + t2 > 9) {
            ind1 = i;
            ind2 = i - 1;
            ll v = (s[i] - '0') + (s[i - 1] - '0');
            temp = to_string(v);
            flag = true;
            break;
        }
    }
    string ans;
    if (flag) {
        for (int i = 0; i < ind2; i++) {
            ans.push_back(s[i]);
        }
        ans += temp;
        for (int i = ind1 + 1; i < s.size(); i++) {
            ans.push_back(s[i]);
        }
    }
    else {
        ll v = s[0] -'0' + s[1] - '0';
        string temp = to_string(v);
        ans += temp;
        for (int i = 2; i < s.size(); i++) {
            ans.push_back(s[i]);
        }
    }
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