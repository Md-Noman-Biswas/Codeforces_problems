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


void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> pref_one(40, 0), pref_zero(40, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        for (int j = 0; j < 40; j++) {
            if (arr[i] & (1LL << j))
                pref_one[j]++;
            else
                pref_zero[j]++;
        }
    }

    ll xd = -1;
    ll mx_score = llmn;

    for (int i = 0; i < n; i++) {
        ll score = 0;
        for (int j = 0; j < 40; j++) {
            if (arr[i] & (1LL << j))
                score += pref_zero[j] * (1LL << j);
            else
                score += pref_one[j] * (1LL << j);
        }

        if (score > mx_score) {
            mx_score = score;
            xd = arr[i];
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (arr[i] ^ xd);
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