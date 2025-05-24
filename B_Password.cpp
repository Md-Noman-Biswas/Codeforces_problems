#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e6 + 7;
const int INF = 1e9 + 10;

#define mod1 1000000007
#define mod2 1000000009
const int p1 = 137, p2 = 277;


ll power(ll a, ll b, ll m){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL *a) % m;
        b = b >> 1;
    }
    return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void pre() {
    pw[0] = {1, 1};
    for (int i = 1; i < N; i++) {
        pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
        pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
    }
    ip1 = power(p1, mod1 - 2, mod1);
    ip2 = power(p2, mod2 - 2, mod2);
    ipw[0] = {1, 1};
    for (int i = 1; i < N; i++) {
        ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
        ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
    }
}

pair<int, int> string_hash(string s) {
    int n = s.size();
    pair<int, int> hs = {0, 0};
    for (int i = 0; i < n; i++) {
        hs.first = (hs.first + 1LL * s[i] * pw[i].first) % mod1;
        hs.second = (hs.second + 1LL * s[i] * pw[i].second) % mod2;
    }
    return hs;
}

pair<int, int> pref[N];
void build(string s) {
    int n = s.size();
    pref[0].first = 1LL * s[0] * pw[0].first % mod1;
    pref[0].second = 1LL * s[0] * pw[0].second % mod2;

    for (int i = 1; i < n; i++) {
        pref[i].first = (1LL * pw[i].first * s[i] + pref[i - 1].first) % mod1;
        pref[i].second = (1LL * pw[i].second * s[i] + pref[i - 1].second) % mod2;
    }
}

// Get the hash of a substring s[i..j]
pair<int, int> get_hash(int i, int j) {
    assert(i <= j);
    pair<int, int> hs = {0, 0};

    hs.first = pref[j].first;
    if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
    hs.first = 1LL * hs.first * ipw[i].first % mod1;

    hs.second = pref[j].second;
    if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
    hs.second = 1LL * hs.second * ipw[i].second % mod2;

    return hs;
}


bool check(ll mid, string &s) {
    for (int i = 1; i + mid - 1 < s.size() - 1; i++) {
        if (get_hash(i, i + mid - 1) == get_hash(0, mid - 1)) {
            return true;
        }
    }
    return false;
}

void solve(){
    string s; cin >> s;   
    pre();
    build(s);
    ll n = s.size();

    vector<ll> good_prefixes_length;
    for (int i = 1; i < n; i++) {
        if (get_hash(0, i - 1) == get_hash(n - i, n - 1)) {
            good_prefixes_length.push_back(i);
        }
    }
    // for (auto it: good_prefixes_length) cout << it << " ";
    // cout << nl;

    ll l = 0, r = good_prefixes_length.size() - 1;
    ll ans = -1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(good_prefixes_length[mid], s)) {
            ans = good_prefixes_length[mid];
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    if (ans == -1) {
        cout << "Just a legend" << nl;
    }
    else {
        cout << s.substr(0, ans) << nl;
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
    solve();
    return 0;
}