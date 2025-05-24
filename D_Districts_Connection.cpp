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
    vector<ll> arr(n + 1);
    map<ll, vector<ll>> mp;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }   
    if(mp.size() == 1){
        NO;
        return;
    }
    YES;
    vector<pair<ll, ll>> ans;
    auto it = mp.begin();
    auto vec = it->second;
    ll root = vec[0];
    vec.erase(vec.begin());
    mp.erase(mp.begin());
    auto last = mp.begin();
    auto vec_2 = last->second;
    auto xd = vec_2[0];
    for(auto it: mp){
        //cout << it.first << " ";
        for(auto it2: it.second){
            ans.push_back({root, it2});
        }
    }
    for(auto it: vec){
        ans.push_back({xd, it});
    }
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