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


void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    vector<ll> adj[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    string s;
    cin >> s;
    map<ll, ll> mp;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            mp[arr[i + 1]] = 2;
        }
    }

    vector<ll> vis(n + 1, 0);
    map<ll, ll> ans;
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        ll cnt = 0;
        vector<ll> curr;
        ll xd = arr[i];
        while (!vis[xd]) {
            vis[xd] = 1;
            curr.push_back(xd);
            if (mp[xd] == 2) cnt++;
            xd = arr[xd];
        }
        for (auto it: curr) {
            ans[it] = cnt;
        }
    }

    for (int i = 1; i <= n; i++) cout << ans[arr[i]] << " ";
    cout << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
