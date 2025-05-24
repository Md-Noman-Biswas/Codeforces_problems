#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    bool flag = true;
    for (int i = 0; i < k; i++) {
        if (s[i] == '?') {
            for (int j = i + k; j < n; j += k) {
                if (s[j] != '?') {
                    s[i] = s[j];
                    break;
                }
            }
        }
    }
    // cout << s << nl;
    for (int i = 0; i < k; i++) {
        if (s[i] != '?') {
            for (int j = i + k; j < n; j += k) {
                // cout << j << nl;
                if (s[j] != s[i] && s[j] != '?') {
                    NO;
                    return;
                }
                else if (s[j] == '?') {
                    s[j] = s[i];
                }
            }
        }
    }
    // cout << s << nl;

    vector<ll> pref_one(n, 0);
    vector<ll> pref_what(n, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            pref_one[i] = 1;
        }
        if (s[i] == '?') {
            pref_what[i] = 1;
        }
    }   

    for (int i = 1; i < n; i++) {
        pref_one[i] += pref_one[i - 1];
        pref_what[i] += pref_what[i - 1];
    }
    // cout << s << nl;
    ll count_of_one = pref_one[k - 1];
    ll count_of_what = pref_what[k - 1];
    ll count_of_zero = k - count_of_one - count_of_what;
    // cout << count_of_zero << " " << count_of_one << " " << count_of_what << nl;
    ll diff = abs(count_of_one - count_of_zero);
    
    count_of_what -= diff;
    if (count_of_what < 0 || count_of_what % 2 != 0) {
        NO;
    }
    else {
        YES;
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