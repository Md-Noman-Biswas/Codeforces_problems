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
    ll n, q;
    cin >> n >> q;
    vector<ll> arr;
    set<ll> st;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        st.insert(x);
    }
    for (auto it: st) {
        arr.push_back(it);
    }
    //sort(arr.begin(), arr.end());
    ll curr_max = arr.back();
    while (q--) {
        char ch;
        ll left, right;
        cin >> ch >> left >> right;
        ll l = 0, r = n - 1;
        if (curr_max >= left && curr_max <= right) {
            if (ch == '+') {
                curr_max++;
            }
            else {
                curr_max--;
            }
        }
        cout << curr_max << " ";
    }   
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