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
    map<ll, ll> mp;
    vector<ll> arr(n + 1);
    vector<pair<ll, ll>> pr;
    map<ll, ll> can_move;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pr.push_back({arr[i], i});
    }

    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        if (x == 1) can_move[i] = -1;
    }   

    deque<pair<ll, ll>> pos;
    for (int i = 1; i <= n; i++) {
        if (can_move[i] != -1) {
            pos.push_back({arr[i], i});
        }
    }
    sort(pos.begin(), pos.end());
    reverse(pos.begin(), pos.end());

    // for (auto it: pos) cout << it.first << " ";
    // cout << nl;

    vector<ll> ans(n + 1);

    for (int i = 1; i <= n; i++) {
        if (can_move[i] == -1) {
            ans[i] = arr[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (can_move[i] == -1) continue;
        arr[i] = pos[0].first;
        pos.pop_front();
    }

    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
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