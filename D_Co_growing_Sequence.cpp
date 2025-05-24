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
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<ll> ans;
    ans.push_back(0);
    ll last = -1;
    for (int i = 0; i < 32; i++) {
        if ((arr[0] & (1 << i)) != 0) {
            last = i;
        }
    }
    //cout << last << nl;
    for (int i = 1; i < n; i++) {
        ll num = 0;
        for (int j = 0; j < 32; j++) {
            if (((arr[i] & (1 << j)) == 0) && ((arr[i - 1] & (1 << j)) != 0)) {
                num |= (1 << j);
            }
        }
        arr[i] ^= num;
        ans.push_back(num);
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