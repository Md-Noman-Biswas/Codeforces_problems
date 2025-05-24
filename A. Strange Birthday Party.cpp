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
    ll n, m;
    cin >> n >> m;   
    vector<ll> arr(n + 1), brr(m + 1);
    vector<pair<ll, ll>> pr;
    map<ll, ll> mp1, mp2;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pr.push_back({arr[i], i});
    }
    for (int i = 1; i <= m; i++) {
        cin >> brr[i];
        mp2[brr[i]] = i;
    }

    ll l = 1;

    sort(pr.begin(), pr.end());
    reverse(pr.begin(), pr.end());

    // for (auto it: pr) {
    //     cout << it.first << " " << it.second << nl;
    // }
    // cout << nl;

    ll cost = 0;
    for (int i = 0; i < n; i++) {
        ll current_cost;
        //cout << brr[l] << " " << brr[pr[i].first] << nl;
        if (brr[l] < brr[pr[i].first]) {
            current_cost = brr[l];
            l++;
        }
        else {
            current_cost = brr[pr[i].first];
        }
        //cout << i << " " << current_cost << nl;
        cost += current_cost;
    }
    cout << cost << nl;

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