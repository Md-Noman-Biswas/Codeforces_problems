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
    vector<ll> arr(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }   
    if(mp.size() == 1){
        cout << 0 << nl;
        return;
    }
    ll mx = llmn;
    for(auto it: mp){
        mx = max(it.second, mx);
    }
    ll target = n - mx;
    ll xd = mx;
    ll ope = 0;
    ope += xd;
    ll copy = 1;
    while(ope < target){
        xd *= 2;
        ope += xd;
        copy++;
    }
    //cout << copy << nl;
    ope -= (ope - target);
    ope += copy;
    cout << ope << nl;
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