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

void solve() {
    ll n;
    cin >> n;
    ll sz = n;
    ll mn = llmx;
    vector<ll> ans;
    while(n--) {
        ll k;
        cin >> k;
        vector<ll> arr(k);
        for(int i = 0; i < k; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        mn = min(mn, arr[0]);
        ans.push_back(arr[1]);
    }   
    // for(auto it: ans){
    //     cout << it << " ";
    // }
    // cout << nl;
    sort(ans.begin(), ans.end());
    ll final_ans = mn;
    for(int i = 1; i < ans.size(); i++){
        final_ans += ans[i];
    }
    cout << final_ans << nl;
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