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

bool contain_x(vector<ll> v, ll x){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            return true;
        }
    }
    return false;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> v[n];
    ll x = 0;
    set<ll> universal;
    for(int i = 0; i < n; i++){
        ll range;
        cin >> range;
        for(int j = 0; j < range; j++){
            ll xd;
            cin >> xd;
            universal.insert(xd);
            v[i].push_back(xd);
        }
    }
    ll sz = universal.size();
    ll ans = llmn;
    for(int i = 1; i <= 50; i++){
        set<ll> st;
        for(int j = 0; j < n; j++){
            if(contain_x(v[j], i)) continue;
            st.insert(v[j].begin(), v[j].end());
        }
        ll temp = st.size();
        if(temp != sz){
            ans = max(ans, temp);
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