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
    ll range = n;
    vector<pair<ll, ll>> p;
    set<ll> st;
    while(n--){
        ll a, x;
        cin >> a >> x;
        if(a != 3){
            p.pb({a, x});
        }else{
            st.insert(x);
        }
    }   

    ll mx = llmn;
    ll mn = llmx;
    for(int i=0; i<p.size(); i++){
        if(p[i].first == 1){
            mx = max(mx, p[i].second);
        }
        else if(p[i].first == 2){
            mn = min(mn, p[i].second);
        }
    }
    ll cnt = 0;
    for(auto it = st.begin(); it != st.end(); it++){
        if(*it >= mx && *it <= mn) cnt++;
    }

    if(mx > mn){
        cout << 0 << nl;
        return;
    }
    ll ans = 0;
    cout << mn - mx + 1 - cnt << nl;
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