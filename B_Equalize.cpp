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
    set<ll> st;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        st.insert(x);
    }
    vector<ll> v;
    for(auto it: st){
        v.push_back(it);
    }
    ll ans = llmn;
    
    for(int i = 0; i < v.size(); i++){
        ll x = v[i] + n;
        ll temp = lower_bound(v.begin(), v.end(), x) - v.begin();
        ans = max(ans, abs(temp - i));
    }
    cout << ans << nl;
}

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