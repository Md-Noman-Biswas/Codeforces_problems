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
    ll x, n;
    cin >> x >> n;
    ll ans = 0;
    
    for(int i = 1; i * i <= x; i++){
        if(x % i == 0){
            ll rem = x - i * n;
            if(rem >= 0 && rem % i == 0){
                ans = max(ans, i * 1LL);
            }
            if(x / i != i){
                ll other_factor = x / i;
                ll newRem = x - other_factor * n;
                if(newRem >= 0 && newRem % other_factor == 0){
                    ans = max(ans, x / i);
                }
            }
        }
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