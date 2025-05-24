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
const int N = 2e5 + 7;
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

int lcp(int i, int j, int x, int y) { // O(log n)
    int l = 1, r = min(j - i + 1, y - x + 1), ans = 0;

    while (l <= r) {
        int mid = (l + r) >> 1; // Binary search mid-point

        // Compare the hash values of substrings [i...i+mid-1] and [x...x+mid-1]
        if (get_hash(i, i + mid - 1) == get_hash(x, x + mid - 1)) {
            ans = mid;      // Update answer if hashes match
            l = mid + 1;    // Try to find a longer match
        } else {
            r = mid - 1;    // Try a shorter match
        }
    }
    return ans; // Length of the longest common prefix
}

string s;
int compare(int i, int j, int x, int y) {
    int lc = lcp(i, j, x, y);
    int len1 = j - i + 1, len2 = y - x + 1;
    if (len1 == len2 && lc == len1) return 0; //equal
    else if (lc == len1) return -1; // first one smaller
    else if (lc == len2) return 1; // first one larger
    else {
        return (s[i + lc] < s[x + lc] ? -1 : 1);
    }
}

bool cmp(int i, int j) {
    ll n = s.size() / 2;
    int x = compare(i, i + n - 1, j, j + n - 1);
    return (x == -1);
}

void solve(){
    cin >> s;
    ll n = s.size();
    s += s;
    pre();
    build(s);
    vector<int> v;
    for (int i = 0; i < n; i++) v.push_back(i);
 
    sort(v.begin(), v.end(), cmp);

    // for (auto it: v) cout << it << nl;

    cout << (find(v.begin(), v.end(), 0) - v.begin() + 1) << nl;
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