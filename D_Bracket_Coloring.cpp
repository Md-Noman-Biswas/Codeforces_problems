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
    if (mp['(']  != mp[')']) {
        cout << -1 << nl;
        return;
    }

    ll i = 0;
    stack<char> st;
    bool flag = 1;
    if (s[0] == '(') {
        flag = 0;
    }

    vector<ll> color(n, 0);
    while (i < n) {
        if (!flag) {
            if (s[i] == '(') {
                st.push('(');
                color[i] = 1;
            }
            else if (s[i] == ')' && !st.empty()) {
                st.pop();
                color[i] = 1;
            }
            else {
                flag = 1;
                st.push(')');
                color[i] = 2;
            }
            i++;
        }
        else {
            if (s[i] == ')') {
                st.push(')');
                color[i] = 2;
            }
            else if (s[i] == '(' && !st.empty()) {
                st.pop();
                color[i] = 2;
            }
            else {
                flag = 0;
                st.push('(');
                color[i] = 1;
            }
            i++;
        }
    }
    set<ll> distinct;
    for (auto it: color) {
        distinct.insert(it);
    }
    cout << distinct.size() << nl;
    if (distinct.size() == 1) {
        for (int i = 0; i < n; i++) color[i] = 1;
    }

    for (int i = 0; i < n; i++) cout << color[i] << " ";
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