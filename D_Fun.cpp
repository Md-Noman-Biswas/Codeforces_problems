#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    int n, x;
    cin >> n >> x; 

    int ans = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = 1; a * b <= n; ++b) {
            ll v1 = x - a - b;
            ll v2 = (n - a * b) / (a + b);
            if (v1 < 0 || v2 < 0) break;
            ans += min(v1, v2);
        }
    }
    cout << ans << endl;

}

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
