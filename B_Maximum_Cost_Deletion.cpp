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
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    vector<ll> one;
    vector<ll> zero;
    ll cons_zero = 0, cons_one = 0;
    if (s[0] == 0) cons_zero++;
    ll first_one = -1;
    ll first_zero = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            first_one = i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            first_zero = i;
            break;
        }
    }

    map<char, ll> mp;
    for (auto it: s) mp[it]++;
    if (first_one != -1) cons_one = 1;
    if (first_zero != -1) cons_zero = 1;
    // cout << first_one << nl;
    for (int i = first_one + 1; i < n; i++) {
        if (s[i] == s[i - 1] && s[i] == '1') {
            cons_one++;
        }
        else if (s[i] == '1' && s[i - 1] == '0') {
            cons_one = 1;
        }
        else if(s[i] == '0' && s[i - 1] == '1') {
            one.push_back(cons_one);
            cons_one = 0;
        }
        // cout << i << "->" << cons_one << nl;
    }
    if (cons_one > 0) one.push_back(cons_one);
    
    for (int i = first_zero + 1; i < n; i++) {
        if (s[i] == s[i - 1] && s[i] == '0') {
            cons_zero++;
        }
        else if (s[i] == '0' && s[i - 1] == '1') {
            cons_zero = 1;
        }
        else if(s[i] == '1' && s[i - 1] == '0') {
            zero.push_back(cons_zero);
            cons_zero = 0;
        }
        // cout << i << "->" << cons_zero << nl;
    }

    if (cons_zero > 0) zero.push_back(cons_zero);
    ll first_term = llmn;
    ll cnt1 = 0;
    ll cnt2 = 0;
    ll ans = a * n;

    for (auto it: one) {
        cnt1 += it * a + b;
    }
    for (auto it: zero) {
        cnt2 += it * a + b;
    }
    if (b < 0) {
        ll mn = min(one.size(), zero.size());
        ans += (mn + 1) * b;
    }
    else {
        ans += n * b;
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