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
    vector<pair<ll, ll>> pr;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        pr.push_back({x, i});
    }

    sort(pr.begin(), pr.end());
    
    vector<ll> pref(n, 0);
    pref[0] = pr[0].first;
    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + pr[i].first;
    }
    
    vector<ll> ans(n);
    stack<ll> st;
    for(int i = 0; i < n; i++){
        st.push(pr[i].second);
        if(i == n - 1 || pref[i] < pr[i + 1].first){
            while(!st.empty()){
                ll temp = st.top();
                ans[temp] = i;
                st.pop();
            }
        }
    }

    for(auto it: ans){
        cout << it << " ";
    }
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