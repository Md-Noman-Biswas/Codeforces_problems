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

struct cmp {
    bool operator()(const pair<ll, pair<ll, ll>>& p1, const pair<ll, pair<ll, ll>>& p2) const {
        if (p1.first == p2.first) {
            if (p1.second.first == p2.second.first)
                return p1.second.second < p2.second.second;
            return p1.second.first < p2.second.first;
        }
        return p1.first < p2.first;
    }
};


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    // ll start = 1;
    set<pair<ll, pair<ll, ll>>, cmp> st1;
    set<pair<ll, pair<ll, ll>>, cmp> st2;
    for (int d = 1; d < 3 * n; d += 3) {
        if (st1.size() > 4e5 + 10) break; 
        ll x = d, y = 1;
        st1.insert({x + y, {x, y}});
        st1.insert({x + y + 1, {x, y + 1}});
        st1.insert({x + 1 + y, {x + 1, y}});
        st1.insert({x + 1 + y + 1 + 2, {x + 1, y + 1}});
        while (x >= 1) {
            if (st1.size() > 4e5 + 10) break; 
            x -= 3;
            y += 3;
            if (x >= 1) {
                st1.insert({x + y, {x, y}});
                st1.insert({x + y + 1, {x, y + 1}});
                st1.insert({x + 1 + y, {x + 1, y}});
                st1.insert({x + 1 + y + 1 + 2, {x + 1, y + 1}});
            }
        }
    }
    for (int d = 1; d < 3 * n; d += 3) {
        if (st2.size() > 4e5 + 10) break; 
        ll x = d, y = 1;
        st2.insert({x + y, {x, y}});
        while (x >= 1) {
            if (st2.size() > 4e5 + 10) break; 
            x -= 3;
            y += 3;
            if (x >= 1) {
                st2.insert({x + y, {x, y}});
            }
        }
    }

    // for (auto it: st2) {
    //     cout << it.first << " " << it.second.first << " " << it.second.second << nl;
    // }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            auto it = *st2.begin();
            st2.erase(st2.begin());
            st1.erase(it);
            cout << it.second.first << " " << it.second.second << nl;
        }
        else {
            auto it = *st1.begin();
            st1.erase(st1.begin());
            st2.erase(it);
            cout << it.second.first << " " << it.second.second << nl;
        }
    }
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