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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> hsh(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        hsh[arr[i]] = 1;
    }
    
    set<ll> st;
    for (int i = 1; i <= n; i++) {
        if (!hsh[i]) {
            st.insert(i);
        }
    }
    
    // for (auto it: st) cout << it << " ";
    // cout << nl;
    

    fill(hsh.begin(), hsh.end(), 0);

    set<ll> temp = st;
    
    vector<ll> ans_min, ans_max;

    for (int i = 0; i < n; i++) {
        if (!hsh[arr[i]]) {
            ans_min.push_back(arr[i]);
            hsh[arr[i]] = 1;
        }
        else {
            ans_min.push_back(*st.begin());
            st.erase(st.begin());
        }
    }

    fill(hsh.begin(), hsh.end(), 0);

    for (int i = 0; i < n; i++) {
        if (!hsh[arr[i]]) {
            ans_max.push_back(arr[i]);
            hsh[arr[i]] = 1;
        }
        else {
            auto it = temp.upper_bound(arr[i]);
            --it;
            ans_max.push_back(*it);
            temp.erase(it);
        }
    }

    for (auto it: ans_min) cout << it << " ";
    cout << nl;

    for (auto it: ans_max) cout << it << " ";
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