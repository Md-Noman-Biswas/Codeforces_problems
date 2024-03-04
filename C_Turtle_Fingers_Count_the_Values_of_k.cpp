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
    ll a, b, l;
    cin >> a >> b >> l;
    ll cnt = 0;

    set<ll> st;
    ll value1 = 1;
    for(ll x = 0; x < 20 && value1 <= l; x++){
        ll value2 = 1;
        for(ll y = 0; y < 20 && value2 * value1 <= l; y++){
            if(l % (value1 * value2) == 0){
                st.insert(l / (value1 * value2));
            }
            value2 *= b;
        }
        value1 *= a;
    }
    
    cout << st.size() << nl;
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