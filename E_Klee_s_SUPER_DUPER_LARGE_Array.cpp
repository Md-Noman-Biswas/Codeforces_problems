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

ll range_sum(ll l, ll r) {
    return (r * (r + 1) / 2) - (l * (l - 1) / 2);
}
 
void solve(){
    ll n, k;
    cin >> n >> k;
    ll mx = k + n - 1;

    ll l = k;
    ll r = mx;
    ll ans = llmx;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll left = range_sum(k, mid);
        ll right = range_sum(mid + 1, k + n - 1);
        ans = min(abs(left - right), ans);
        if (left > right) r = mid - 1;
        else l = mid + 1;
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