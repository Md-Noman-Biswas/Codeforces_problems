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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    return p1.second < p2.second;
}

vector<pair<ll, ll>> hsh[N];
vector<ll> color[N];
void solve(){
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> arr(n, vector<ll> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            hsh[arr[i][j]].push_back({i, j});
        }
    }   
    ll ans = 0;
    for (int i = 1; i < N; i++) {
        if (hsh[i].size() > 0) {
            sort(hsh[i].begin(), hsh[i].end());
            ll sz = hsh[i].size();

            vector<ll> suff(sz);

            suff[sz - 1] = hsh[i][sz - 1].first;
            // cout << suff[hsh[i].size() - 1] << " ";
            for (int j = sz - 2; j >= 0; j--) {
                // cout << hsh[i][j].first << " ";
                suff[j] = suff[j + 1] + hsh[i][j].first;
                // cout << suff[j] << " ";
            }
            // cout << nl;

            for (int j = 0; j < sz - 1; j++) {
                ans += suff[j + 1] - hsh[i][j].first * (sz - j - 1);
            }

            sort(hsh[i].begin(), hsh[i].end(), cmp);

            // for (int j = 0; j < hsh[i].size(); j++) {
            //     cout << hsh[i][j].first << " " << hsh[i][j].second << nl;
            // }
            // cout << nl;

            vector<ll> suff2(sz);
            suff2[sz - 1] = hsh[i][sz - 1].second;
            // cout << suff2[sz] << " ";
            for (int j = sz - 2; j >= 0; j--) {
                suff2[j] = suff2[j + 1] + hsh[i][j].second;
                // cout << suff2[j] << " ";
            }

            for (int j = 0; j < sz - 1; j++) {
                ans += suff2[j + 1] - hsh[i][j].second * (sz - j - 1);
            }
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
    solve();
    return 0;
}