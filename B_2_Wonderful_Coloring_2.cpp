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
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }   
    vector<ll> hsh(n + 1, 0);
    vector<ll> ans(n, 0);
    vector<ll> rem;
    for (auto it: mp) {
        if (it.second.size() >= k) {
            ll sz = it.second.size() % k;
            // cout << it.first << " " << sz << nl;
            // cout << it.second.size() - sz << nl;
            ll color = 1;
            ll szz = it.second.size();
            for (int i = 0; i < k; i++) {
                ans[it.second[i]] = color;
                color++;
            }
        }
        else {
            for (auto it2: it.second) {
                rem.push_back(it2);
            }
        }
    }

    ll xd = rem.size() % k;
    while (xd--) {
        rem.pop_back();
    }
    ll color = 1;
    for (auto it: rem) {
        if (color > k) color = 1;
        ans[it] = color;
        color++;
    }

    for (auto it: ans) cout << it << " ";
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