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

bool predicate(ll mid, map<ll, ll> &mp){
    for(auto it: mp){
        if(it.second > mid){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n, w;
    cin >> n >> w;
    vector<ll> arr(n);
    multiset<ll> st;
    ll d = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }   
    ll rem = w;
    ll ans = 1;
    while(!st.empty()){
        auto it = st.upper_bound(rem); 
        if(it == st.begin()){
            ans++;
            rem = w;
        }else{
            it--;
            rem -= *it;
            st.erase(it);
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