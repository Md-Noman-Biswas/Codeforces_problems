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
    ll n, m, q;
    cin >> n >> m >> q;

    vector<ll> mfs;
    for (int i = 0; i < m; i++) {
        ll ind;
        cin >> ind;
        mfs.push_back(ind);
    }
    sort(mfs.begin(), mfs.end());


    while (q--) {
        ll s;
        cin >> s;
        ll t1, t2;
        auto it = upper_bound(mfs.begin(), mfs.end(), s);
        // cout << it - mfs.begin() << nl;
        auto right = it - mfs.begin();;
        // cout << it - mfs.begin() << nl;
        if (right == 0) t1 = - 1;
        else t1 = mfs[right - 1];
        if (it == mfs.end()) t2 = -1;
        else t2 = mfs[right];
        // cout << t1 << " " << t2 << nl;

        ll ans = 0;
        if (t1 != -1 && t2 != -1) {
            ll temp;
            ll pivot;
            if (t2 - s - 1 > s - t1 - 1) {
                temp = s - t1 - 1;
                t2 -= temp;
                t1 += temp;
                pivot = t2;
            }
            else {
                temp = t2 - s - 1;
                t1 += temp;
                t2 -= temp;
                pivot = t1;
            }
            // cout << t1 << " " << t2 << nl;
            ans += temp;
            // cout << pivot << nl;
            ans += ((abs(pivot - s) - 1) / 2) + 1;
        }
        else if (t2 == -1) {
            ans = min(s - t1, s - t2);
            ans += n - s;
        }
        else if (t1 == -1) {
            ans = t2 - s;
            ans += s - 1;
        }
        // cout << t1 << " " << t2 << nl;

        cout << ans << nl;

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