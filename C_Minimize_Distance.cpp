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
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    vector<ll> pos;
    vector<ll> neg;
    map<ll, ll> mp;
    map<ll, ll> mn;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            mp[arr[i]]++;
            pos.push_back(arr[i]);
        }
        else {
            mn[abs(arr[i])]++;
            neg.push_back(abs(arr[i]));
        }
    }   

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    ll p_sz = pos.size();
    ll n_sz = neg.size();
    
    ll neg_cost = 0;
    ll pos_cost = 0;

    //cout << p_sz << " " << n_sz << nl;

    for (int i = p_sz - 1; i >= 0; i -= k) {
        pos_cost += (2 * pos[i]);
    }

    //cout << pos_cost << nl;

    for (int i = n_sz - 1; i >= 0; i -= k) {
        neg_cost += (2 * neg[i]);
    }

    //cout << neg_cost << nl;

    ll cost = pos_cost + neg_cost;
    ll ng = llmn;
    ll pg = llmn;

    if (!neg.empty()) {
        ng = neg.back();
    }
    if (!pos.empty()) {
        pg = pos.back();
    }

    if (ng > pg) {
        cost -= ng;
    }
    else {
        cost -= pg;
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