#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(){
    ll n;
    cin >> n;
    string s, r;
    cin >> s;   
    r = s;
    reverse(r.begin(), r.end());

    map<char, vector<ll>> forward, backward;

    for (int i = 0; i < n; i++) forward[s[i]].push_back(i);
    for (int i = 0; i < n; i++) backward[r[i]].push_back(i);

    vector<ll> p(n);
    for (char ch = 'a'; ch <= 'z'; ch++) {
        for (int i = 0; i < forward[ch].size(); i++) {
            p[backward[ch][i]] = forward[ch][i];
        }
    }

    // for (auto it: p) cout << it << " ";
    ordered_set<ll> st;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        st.insert(p[i]);
        ans += st.size() - st.order_of_key(p[i] + 1);
        // cout << ans << nl;
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