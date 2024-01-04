#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n, s, k;
    cin >> n >> s >> k;
    // set<ll> st;
    // for(int i=0; i<k; i++){
    //     ll x;
    //     cin >> x;
    //     st.insert(x);
    // }   
    // vector<ll> ans(n-k);
    // int cnt = 0;
    // for(int i=1; i<=n; i++){
    //     if(st.find(i) == st.end()){
    //         ans[cnt] = i;
    //         cnt++;
    //     }
    // }
    // auto it = lower_bound(ans.begin(), ans.end(), s);
    // ll x = 0;
    // if(it == ans.end()){
    //     it = ans.begin();
    // }
    // x = *it;
    // --it;
    // if(it == ans.end()){
    //     it = ans.begin();
    // }
    // ll y = *it;
    // ll xd = min(abs(s-x), abs(s-y));
    // cout << xd << nl;
    vector<ll> a(k);
    for(int i=0; i<k; i++){
        cin >> a[i];
    }
    for (int i=0; i<=k; i++) {
        if (s+i <= n && find(a.begin(), a.end(), s+i) == a.end()){
            cout << i << endl; 
            return;
        }
		if (s-i >= 1 && find(a.begin(), a.end(), s-i) == a.end()){
            cout << i << endl; 
            return;
        }
	}
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