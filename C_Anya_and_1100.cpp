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
    string t;
    t = s;
    map<ll, ll> mp;
    vector<ll> hsh(s.size(), 0);
    ll cnt = 0;
    for (int i = 0; i < s.size();) {
        if (s[i] == '1') {
            if (s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                i += 4;
                cnt++;
            }
            else {
                i++;
            }
        }
        else {
            i++;
        }
    }
    ll q;
    cin >> q;
    while (q--) {
        ll ind;
        char v;
        cin >> ind >> v;
        --ind;
        for (int i = ind - 3; i <= ind; i++) {
            if (i < 0 || i + 3 >= s.size()) continue;
            if (s.substr(i, 4) == "1100") {
                cnt--;
            }
        }
        
        s[ind] = v;

        for (int i = ind - 3; i <= ind; i++) {
            if (i < 0 || i + 3 >= s.size()) continue;
            if (s.substr(i, 4) == "1100") {
                cnt++;
            }
        }
        if (cnt) YES;
        else NO;
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