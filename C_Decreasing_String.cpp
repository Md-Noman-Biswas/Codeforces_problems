#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    string s; cin >> s;
    ll ind;
    cin >> ind;
    ll n = s.size();
    vector<ll> pref(n, 0);
    vector<ll> arr(n, 0);
    vector<ll> hsh(n, -1);
    ll v = n;
    stack<ll> st;
    for (int i = 0; i < s.size(); i++) {
        arr[i] = v;
        pref[i] = v;
        v--;
    }

    vector<bool> remove(n, false);
    vector<ll> order;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && s[st.top()] > s[i]) {
            remove[st.top()] = true;
            order.push_back(st.top());
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {
        remove[st.top()] = true;
        order.push_back(st.top());
        st.pop();
    }

    // for (auto it: order) cout << it << " ";
    // cout << nl;

    for (int i = 1; i < n; i++) pref[i] += pref[i - 1];
    // for (auto it: pref) cout << it << " ";
    // cout << nl;

    auto it = lower_bound(pref.begin(), pref.end(), ind);
    if (it == pref.end()) --it;

    ll seg = it - pref.begin();

    // cout << seg << nl;
    // cout << arr[seg] << nl;
    ll need_to_remove = n - arr[seg];
    // cout << need_to_remove << nl;

    ll cnt = 0;

    string trim;

    for (int i = 0; i < need_to_remove; i++) {
        hsh[order[i]] = 1;
        // cout << order[i] << " ";
    }

    for (int i = 0; i < n; i++) {
        if (hsh[i] != 1) {
            trim.push_back(s[i]);
        }
    }
    // cout << trim << nl;

    ll curr_ind = ind;
    if (seg > 0) {
        curr_ind = ind - pref[seg - 1];
    }
    --curr_ind;
    cout << trim[curr_ind];
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * Think about multiple minimum and maximum
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