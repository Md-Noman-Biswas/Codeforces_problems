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
    vector<ll> arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    vector<ll> pref(n + 1, 0);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + arr[i];
    }
    ll ans = llmn;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            ll mx = llmn;
            ll mn = llmx;
            ll last = 0;
            //cout << i << "-> " << nl;
            for(int j = i; j <= n; j += i){
                //cout << pref[j] - pref[last] << nl;
                mx = max(mx, pref[j] - pref[last]);
                mn = min(mn, pref[j] - pref[last]);
                last = j; 
            }
            //cout << mx << " " << mn << nl;
            ans = max(ans, mx - mn);
            //cout << ans << nl << nl;
            if(n / i != i){
                ll mx = llmn;
                ll mn = llmx;
                ll last = 0;
                ll another_div = n / i;
                for(int j = another_div; j <= n; j += another_div){
                    mx = max(mx, pref[j] - pref[last]);
                    mn = min(mn, pref[j] - pref[last]);
                    last = j; 
                }
                ans = max(ans, mx - mn);
            }
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