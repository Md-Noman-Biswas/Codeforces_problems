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
    ll n;
    cin >> n;
    string s;
    s.push_back('a'), s.push_back('e'), s.push_back('i'), s.push_back('o'), s.push_back('u');
    // cout << s << nl;
    string ans;
    map<char, ll> mp;
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (cnt == n) break;
        // ans.push_back(s[i]);
        mp[s[i]]++;
        cnt++;
    }
    // char temp = ans.back();

    while (cnt != n) {
        for (auto it: s) {
            cnt++;
            mp[it]++;
            if (cnt == n) break;
        }
    }

    for (auto it: mp) {
        for (int i = 0; i < it.second; i++) {
            ans.push_back(it.first);
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