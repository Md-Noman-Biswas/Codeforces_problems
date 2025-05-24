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
    ll n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<ll>> hsh1(27, vector<ll> (n, 0));
    vector<vector<ll>> hsh2(27, vector<ll> (n, 0));

    for (int i = 0; i < 27; i++) {
        char ch = i + 'a';
        for (int j = 0; j < n; j++) {
            if (s1[j] == ch) {
                hsh1[i][j]++;;
            }
        }
    }

    for (int i = 0; i < 27; i++) {
        char ch = i + 'a';
        for (int j = 0; j < n; j++) {
            if (s2[j] == ch) {
                hsh2[i][j]++;;
            }
        }
    }

    for (int i = 0; i < 27; i++) {
        for (int j= 1; j < hsh1[i].size(); j++) {
            hsh1[i][j] += hsh1[i][j - 1];
        }
    }

    for (int i = 0; i < 27; i++) {
        for (int j= 1; j < hsh2[i].size(); j++) {
            hsh2[i][j] += hsh2[i][j - 1];
        }
    }

    // for (auto it: hsh1) {
    //     for (auto it2: it) {
    //         cout << it2;
    //     }
    //     cout << nl;
    // }
    
    while (k--) {
        ll l, r;
        cin >> l >> r;
        --l, --r;
        ll ope = 0;
        for (int i = 0; i < 27; i++) {
            ll cnt1 = 0, cnt2 = 0;
            ll left = 0;
            ll right = 0;
            if (l > 0) left = hsh1[i][l - 1];
            right = hsh1[i][r];
            cnt1 = right - left;
            left = 0; right = 0;
            if (l > 0) left = hsh2[i][l - 1];
            right = hsh2[i][r];
            cnt2 = right - left;
            ope += abs(cnt1 - cnt2);
        }
        cout << ope / 2 << nl;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}