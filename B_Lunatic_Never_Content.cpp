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
    for(int i = 0; i < n; i++) cin >> arr[i];
    set<ll> st;
    ll l = 0, h = n - 1;
    while(l < h){
        //cout << arr[l] << " " << arr[h] << nl;
        st.insert(abs(arr[l] - arr[h]));
        l++; 
        h--;
    }   
    // for(auto it: st){
    //     cout << it << " ";
    // }
    // cout << nl;
    ll ans = 0;
    if(!st.empty()){
        ans = *(st.begin());
        if(ans == 0 && st.size() > 1){
            auto it = st.begin();
            it++;
            ans = *it;
        }
    }
    cout << ans << nl;
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