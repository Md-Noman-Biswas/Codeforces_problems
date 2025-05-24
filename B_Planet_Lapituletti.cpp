#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
// #define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

bool check(ll n) {
    if (n == 0 || n == 1 || n == 2 || n == 5 || n == 8) return true;
    return false;
}

int flip(ll n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 5;
    if (n == 5) return 2;
    if (n == 8) return 8;
}

bool reverse_check(ll num, ll rev) {
    ll temp = num;
    ll d1 = flip(temp % 10);
    ll d2 = flip(temp / 10);
    ll new_digit = d1 * 10 + d2;
    if (new_digit < 10) new_digit *= 10;
    // cout << new_digit << nl;
    return new_digit < rev;
}

ll find(ll mm, ll mod, ll rev) {
    ll ans_mm;
    ll xd = (mm);
    while (1) {
        xd %= mod;
        ll temp1 = xd % 10;
        ll temp2 = xd / 10;
        bool flag1 = check(temp1);
        bool flag2 = check(temp2);
        if (flag1 & flag2 && reverse_check(xd, rev)) {
            ans_mm = xd;
            break;
        }
        else {
            xd++;
        }
    }
    return ans_mm;
}

void solve(){
    ll h, m;
    cin >> h >> m;
    string s;
    cin >> s;
    bool initial = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ':') {
            if (check(s[i] - '0') == false) {
                initial = false;
            } 
        }
    }

    ll hh = 10 * (s[0] - '0') + (s[1] - '0');
    ll mm = 10 * (s[3] - '0') + (s[4] - '0');

    ll ans_mm = find(mm, m, h);
    ll ans_hh = find(hh, h, m);

    if (ans_hh != hh) {
        ans_mm = 0;
    }

    cout << ans_hh << nl;

    if (ans_mm < hh) {
        cout << 0 << 0 << ":"<< 0 << 0 << nl;
        return;
    }

    else {
        if (ans_hh < 10) {
            cout << 0 << ans_hh;
        }
        else {
            cout << ans_hh;
        }
        cout << ":";
        if (ans_mm < 10) {
            cout << 0 << ans_mm;
        }
        else{
            cout << ans_mm;
        }
        cout << nl;
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