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
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    vector<ll> last_position(m + 1, -1);
    ll i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0) {
        if (s[i] == t[j]) {
            last_position[j] = i;
            j--;
            i--;
        }
        else {
            i--;
        }
    } 

    // for (int i = 0; i < m; i++) cout << last_position[i] << " ";
    // cout << nl;

    vector<ll> first_position(m + 1, -1);
    i = 0, j = 0;
    while (i < n && j < m) {
        if (s[i] == t[j]) {
            first_position[j] = i;
            i++;
            j++;
        }
        else {
            i++;
        }
    }

    // for (int i = 0; i < m; i++) cout<< first_position[i] << " ";
    // cout << nl;

    ll ans = -1;
    for (int i = 0; i < m - 1; i++) {
        ans = max(ans, last_position[i + 1] - first_position[i]);
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
    solve();
    return 0;
}