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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<vector<ll>> bits(n, vector<ll> (33, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 32; j >= 0; j--) {
            if ((arr[i] & (1LL << j)) == 0) {
                bits[i][j] = 1;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 32; j >= 0; j--) {
            bits[i][j] += bits[i - 1][j];
        }
    }

    // // cout << nl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 32; j >= 0; j--) {
    //         cout << bits[i][j];
    //     }
    //     cout << nl;
    // }

    ll q; 
    cin >> q;
    while (q--) {
        ll l, k;
        cin >> l >> k;
        l--;
        ll low = l;
        ll high = n - 1;

        ll ans = -1;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll total = 0;
            for (int i = 32; i >= 0; i--) {
                if ((bits[mid][i] - (l == 0 ? 0 : bits[l - 1][i])) == 0) {
                    total += (1LL << i);
                }
            }
            // cout << low << " " << mid << " " << total << nl;
            if (total >= k) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        ans == -1 ? cout << ans << " " : cout << ++ans << " ";
    }
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}