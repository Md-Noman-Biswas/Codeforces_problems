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
    ll a, b;
    cin >> a >> b;
    
    string s;
    cin >> s;

    deque<char> dq;

    for (auto it: s) dq.push_back(it);
    ll n = dq.size();

    while (dq.front() == '0' && !dq.empty()) {
        dq.pop_front();
    }

    while (dq.back() == '0' && !dq.empty()) {
        dq.pop_back();
    }

    // for (auto it: dq) cout << it;
    // cout << nl;

    n = dq.size();

    string trim;
    for (int i = 0; i < dq.size(); i++) {
        if (dq[i] == '1') {
            trim.push_back(dq[i]);
            while (dq[i] == '1' && i < n) {
                i++;
            }
            if (i < n) trim.push_back(dq[i]);
        }
        else {
            trim.push_back(dq[i]);
        }
    }
    //cout << trim << nl;
    ll zero = 0;
    for (auto it: trim) {
        if (it == '0') zero++;
    }

    if (zero == trim.size()) {
        cout << 0 << nl;
        return;
    }
    ll cost = a;

    for (int i = 0; i < trim.size(); i++) {
        ll cnt = 0;
        while (trim[i] == '0') {
            i++;
            cnt++;
        }
        cost += min(cnt * b, a);
    }

    cout << cost << nl;
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