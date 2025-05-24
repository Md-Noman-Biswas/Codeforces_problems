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
    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pr.push_back({arr[i], i + 1});
    }   
    sort(pr.begin(), pr.end());
    vector<ll> conversations[n + 1];
    ll pivot = pr[n - 1].first;
    ll pivot_ind = pr[n - 1].second;
    // cout << pivot << nl;
    // for (auto it: pr) {
    //     cout << it.first << " " << it.second << nl;
    // }

    for (int i = n - 2; i >= 0; i--) {
        ll temp = pr[i].first;
        while (temp) {
            conversations[pivot_ind].push_back(pr[i].second);
            pivot--;
            temp--;
            // cout << i << " ";
            // cout <<pivot <<nl;
            if (pivot == 0) {
                pivot = temp;
                pivot_ind = pr[i].second;
                break;
            }
        }
    }
    vector<pair<ll, ll>> ans;

    for (int i = 1; i <= n; i++) {
        if (conversations[i].empty()) continue;
        for (auto it: conversations[i]) {
            ans.push_back({i, it});
        }
        // cout << nl;
    }
    cout << ans.size() << nl;
    for (auto it: ans) cout << it.first << " " << it.second << nl;


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