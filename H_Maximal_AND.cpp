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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll mx = llmn;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    ll ope = k;
    vector<ll> bits;
    for (int i = 30; i >= 0; i--) {
        ll temp_ope = 0;
        for (int j = 0; j < n; j++) {
            if (!(arr[j] & (1 << i))) {
                temp_ope++;
            } 
        }
        if (temp_ope <= ope) {
            bits.push_back(i);
            ope -= temp_ope;
        } 
    } 
    ll value = 0;
    for (auto it: bits) {
        value += (1 << it);
    }  
    mx = max(mx, value);
    
    //cout << value << nl;
    for (auto it: bits) {
        for (int i = 0; i < n; i++) {
            arr[i] |= (1 << it);
        }
    }
    ll ans = mx;
    for (int i = 0; i < n; i++) {
        ans &= arr[i];
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