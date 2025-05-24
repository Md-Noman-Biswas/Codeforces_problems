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
    ll cons = 0;
    string trim;
    ll vv = 0, oo = 0;
    if (s[0] == 'v' && s[1] == 'v') trim.push_back(s[0]);
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == 'v' && s[i + 1] != 'v' && s[i - 1] != 'v') {
            continue;
        }
        else {
            trim.push_back(s[i]);
        }
    }
    trim.push_back(s.back());

    for (auto it: s) {
        if (it == 'o') oo++;
        if (it == 'v') vv++;
    }

    reverse(trim.begin(), trim.end());

    while(trim.back() != 'v' && trim.size() > 0) {
        trim.pop_back();
    }
    
    reverse(trim.begin(), trim.end());

    while(trim.back() != 'v' && trim.size() > 0) {
        trim.pop_back();
    }
    if (trim.size() == 0 || vv == 0 || oo == 0) {
        cout << 0 << nl;
        return;
    }
    //cout << trim << nl;
    
    vector<ll> v, o;
    ll cons_v = 0;
    ll cons_o = 0;
    if (trim[0] == 'v') cons_v++;
    for (int i = 1; i < trim.size(); i++) {
        if (trim[i] == 'v') {
            cons_v++;
        }
        else {
            if(cons_v) v.push_back(--cons_v);
            cons_v = 0;
        }
    }
    if (cons_v != 0) v.push_back(--cons_v);
    
    cons_o = 0;
    for (int i = 1; i < trim.size(); i++) {
        if (trim[i] == 'o') {
            cons_o++;
        }
        else {
            if (cons_o) o.push_back(cons_o);
            cons_o = 0;
        }
    }

    // for (auto it: v) {
    //     cout << it << " ";
    // }
    // cout << nl;
    // for (auto it: o) {
    //     cout << it << " ";
    // }
    // cout << nl;

    vector<ll> pref_v(v.size(), 0);
    pref_v[0] = v[0];
    for (int i = 1; i < v.size(); i++) {
        pref_v[i] = pref_v[i - 1] + v[i];
    }

    
    ll r = v.size() - 1;
    ll ways = 0;
    if (!o.empty() && !v.empty()) {
        ways += o[0] * pref_v[0] * (pref_v[r] - pref_v[0]);
        for (int i = 1; i < o.size(); i++) {
            ways += o[i] * pref_v[i] * (pref_v[r] - pref_v[i]);
        }
    }
    cout << ways << nl;
    
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