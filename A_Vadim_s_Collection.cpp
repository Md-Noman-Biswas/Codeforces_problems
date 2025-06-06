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
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    deque<char> dq;
    for (auto it: s) dq.push_back(it);


    map<char, ll> mp;
    for (auto it: s) mp[it - '0']++;

    vector<ll> ans;
    for (int i = 9; i >= 0; i--) {
        if (mp[i] > 0) {
            ans.push_back(i);
            mp[i]--;
        }
        else {
            for (int j = 0; j < 10; j++) {
                if (mp[j] > 0 && j >= i) {
                    ans.push_back(j);
                    mp[j]--;
                    break;
                }
            }
        }
    }
    for (auto it: ans) cout << it;
    cout << nl;
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