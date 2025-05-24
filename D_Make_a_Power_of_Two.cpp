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

vector<ll> power(64);
vector<string> pw;

void init() {
    for (ll i = 0; i < 64; i++) {
        power[i] = (1LL << i);
        ll temp = (1LL << i);
        string s = to_string(temp);
        pw.push_back(s);
    }
}

ll cmp(string s1, string s2) {
    ll n = s1.size();
    ll m = s2.size();
    vector<ll> hsh1(n, 0);
    vector<ll> hsh2(m, 0);
    ll ind = 0;
    ll cnt = 0;
    for (int i = 0; i < s2.size(); i++) {
        bool found = false;
        for (int j = ind; j < s1.size(); j++) {
            if (s1[j] == s2[i]) {
                ind = j + 1;
                hsh1[j] = 1;
                hsh2[i] = 1;
                found = true;
                break;
            }
        }
        if (!found) break;
    }
    return count(hsh1.begin(), hsh1.end(), 0) + count(hsh2.begin(), hsh2.end(), 0);
}

void solve(){
    ll n;
    cin >> n;
    ll ope = llmx;
    string xd = to_string(n);
    for (ll i = 0; i < 64; i++) {
        ope = min(ope, cmp(xd, pw[i]));
    }
    //cmp("9", "16");
    cout << ope << nl;
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
    init();
    while(t--) {
        solve();
    }
    return 0;
}