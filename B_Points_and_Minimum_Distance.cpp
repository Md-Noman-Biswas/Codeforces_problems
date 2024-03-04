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

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(2 * n);
    for(int i = 0; i < 2 * n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<pair<ll, ll>> ans;
    ll l = 0;
    ll r = 2 * n - 1;
    while(l < r){
        ans.push_back({arr[l], arr[r]});
        l++;
        r--;
    }
    ll cnt = 0;   
    for(int i = 0; i < ans.size() - 1; i++){
        cnt += abs(ans[i].first - ans[i + 1].first);
        cnt += abs(ans[i].second - ans[i + 1].second);
    }
    cout << cnt << nl;
    for(auto it: ans){
        cout << it.first << " " << it.second << nl;
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