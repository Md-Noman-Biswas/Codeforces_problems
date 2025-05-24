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
const int N = 2e6 + 7;
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

void solve(){
    ll n, k;
    cin >> n >> k;
    string s; cin >> s;
    string cd = s;
    for (int i = 0; i < k - 1; i++) cd.push_back(s[i]);
    pre();
    build(cd);
    ll m;
    cin >> m;
    vector<string> games;
    for (int i = 0; i < m; i++) {
        string temp;
        cin >> temp;
        games.push_back(temp);
    }   

    set<pair<ll, ll>> st;
    map<pair<ll, ll>, ll> mp;
    for (int i = 0; i < m; i++) {
        auto it = string_hash(games[i]);
        st.insert(it);
        mp[it] = i;
    }
    set<pair<ll, ll>> st_reserved = st;
    vector<ll> ans;
    for (int len = 0; len <= k; len++) {
        for (int i = len; i + k - 1 < cd.size(); i += k) {
            auto it = get_hash(i, i + k - 1);
            if (st.find(it) == st.end()) {
                break;
            }
            else {
                ans.push_back(mp[it]);
                st.erase(it);
            }
        }
        // cout << ans.size() << nl;
        if (ans.size() == n) break;
        else {
            ans.clear();
            st = st_reserved;
        }
    }

    // cout << cd << nl;

    if (ans.empty()) {
        NO;
        return;
    }
    YES;
    for (auto it: ans) cout << ++it << " ";
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
    solve();
    return 0;
}