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
    sort(arr.begin(), arr.end());

    if (n == 1) {
        cout << 1 << nl;
        return;
    }

    if (n == 2) {
        cout << abs(arr[1] - arr[0]) << nl;
        return;
    }

    ll ans = llmn;
    if (n % 2 == 0) {
        
        for (int i = 0; i < n - 1; i += 2) {
            ans = max(ans, abs(arr[i] - arr[i + 1]));
        }
        cout << ans << nl;
        return;
    }
    else {
        ans = llmx;
        for (int i = 0; i < n; i++) {
            vector<ll> temp;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                temp.push_back(arr[j]);
            }
            ll temp_ans = temp[1] - temp[0];
            for (int k = 2; k < temp.size(); k += 2) {
                temp_ans = max(temp_ans, abs(temp[k] - temp[k + 1]));
            }
            ans = min(ans, temp_ans);
        }
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