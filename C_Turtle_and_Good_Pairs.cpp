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
    cin >> s;
    map<char, ll> mp;

    for (auto it: s) {
        mp[it]++;
    }  

    deque<char> single;
    //vector<char> mingle;

    for (auto it: mp) {
        if (it.second == 1) {
            single.push_back(it.first);
            mp[it.first] = 0;
        }
    } 
    
    string ans;

    for (auto it: mp) {
        if (it.second > 1) {
            for (int i = 0; i < it.second; i++) {
                if (single.empty()) break;
                ans.push_back(it.first);
                mp[it.first]--;
                if (i != it.second - 1) {
                    ans.push_back(single.front());
                    single.pop_front();
                }
            }
            if (single.empty()) break;
        }
    }

    for (auto it: single) {
        ans.push_back(it);
    }

    while(ans.size() != n) {
        for (auto it: mp) {
            if (it.second != 0) {
                ans.push_back(it.first);
                mp[it.first]--;
            }
        }
    }

    if (ans.empty()) {
        cout << s << nl;
        return;
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