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
    set<ll> st;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    sort(arr.begin(), arr.end());
    map<ll, ll> mp;
    mp[arr[0]] = abs(arr[1] - arr[0]);
    mp[arr[n - 1]] = abs(arr[n - 1] - arr[n - 2]);
    for (int i = 1; i < n - 1; i++) {
        mp[arr[i]] = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
    }   
    ll mn = llmx;
    for (auto it: mp) {
        mn = min(it.second, mn);
        //cout << it.first << " " << it.second << nl;
    }

    for (int j = 1; j <= 100; j++) {
        ll temp_mn = llmx;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (abs(arr[i] - j) >= mp[arr[i]]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            YES;
            return;
        }
    }
    NO;
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