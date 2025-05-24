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
    for (auto it: s) mp[it]++;
    ll ones = mp['1'];
    vector<ll> ans;
    deque<ll> dq;
    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << nl;
        return;
    }
    cout << 1 << nl;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            dq.push_back(i);
        }
    }
    ll idx = s.size() - 1;
    while (ones--) {
        if (s[idx] == '0') {
            if (dq.empty()) break;
            ans.push_back(idx + 1);
            ans.push_back(dq.front() + 1);
            swap(s[idx], s[dq.front()]);
            dq.pop_front(); 
            
        }
        idx--;
    }   
    // cout << s << nl;
    sort(ans.begin(), ans.end());
    cout << ans.size() << " ";
    for (auto it: ans) cout << it << " ";
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