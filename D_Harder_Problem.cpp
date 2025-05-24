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
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }   
    vector<ll> ans(n, 0);
    for (int i = 0; i < n; i++) {
        if (mp[arr[i]] == 0) {
            ans[i] = arr[i];
            mp[arr[i]]++;
        }
    }
    // for (auto it: ans) cout << it << " ";
    // cout << nl;
    vector<ll> empty;
    for (int i = 0; i < n; i++) {
        if (ans[i] == 0) {
            empty.push_back(i);
        }
    }
    ll lst = 1;
    for (int i = 0; i < empty.size(); i++) {
        for (int j = lst; j <= n; j++) {
            if (mp[j] == 0) {
                ans[empty[i]] = j;
                mp[j]++;
                lst = j;
                break;
            }
        }
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