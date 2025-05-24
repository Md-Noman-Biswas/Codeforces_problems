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
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll> (m));
    vector<vector<ll>> vis(n, vector<ll> (m, 0));
    vector<ll> extra(n * m + 1, 0);
    map<ll, ll> mp;
    ll mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            mp[arr[i][j]]++;
            mx = max(mx, arr[i][j]);
        }
    }   
    if (mp.size() == 1) {
        cout << 0 << nl;
        return;
    }
    // ll extra = 0;
    // cout << mn_color << " " << mn_color_freq << nl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j]) continue;
            if (i - 1 >= 0) {
                if (arr[i - 1][j] == arr[i][j] && !vis[i - 1][j]) {
                    mp[arr[i][j]]--;
                    vis[i][j] = 1;
                    vis[i - 1][j] = 1;
                    extra[arr[i][j]]++;
                }
            }
            if (j - 1 >= 0) {
                if (arr[i][j - 1] == arr[i][j] && !vis[i][j - 1]) {
                    mp[arr[i][j]]--;
                    vis[i][j] = 1;
                    vis[i][j - 1] = 1;
                    extra[arr[i][j]]++;
                }
            }
            if (i + 1 < n) {
                if (arr[i + 1][j] == arr[i][j] && !vis[i + 1][j]) {
                    mp[arr[i][j]]--;
                    vis[i][j] = 1;
                    vis[i + 1][j] = 1;
                    extra[arr[i][j]]++;
                }
            }
            if (j + 1 < m) {
                if (arr[i][j + 1] == arr[i][j] && !vis[i][j + 1]) {
                    mp[arr[i][j + 1]]--;
                    vis[i][j + 1] = 1;
                    vis[i][j] = 1;
                    extra[arr[i][j]]++;
                }
            }
        }
    }

    vector<pair<ll, ll>> pr;
    for (auto it: mp) pr.push_back({it.second, it.first});
    sort(pr.begin(), pr.end());

    ll mn_color = pr.front().second;
    ll mn_color_freq = pr.front().first;

    ll sz = 0;
    for (auto it: mp) {
        if (it.second > 0) sz++;
        // cout << it.first << " " << it.second << nl;
    }

    ll extra_sum = 0;
    for (int i = 1; i <= n * m; i++) {
        // if (i == mn_color) continue;
        // cout << i << " " << extra[i] << nl;
        if (extra[i] > 0) extra_sum++;
    }
    // cout << extra_sum << nl;

    ll ans = llmx;
    for (int i = 1; i <= mx; i++) {
        ll natural_groups = sz;
        ll unnatural_groups = extra_sum;
        if (mp[i] != 0) natural_groups--;
        if (extra[i] > 0) unnatural_groups--;
        // cout << i << " -> ";
        // cout << natural_groups << " " << unnatural_groups << nl;
        ans = min(ans, natural_groups + unnatural_groups);
    }
    cout << ans << nl;
    // cout << extra_sum + mp.size() - 1 << nl;
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