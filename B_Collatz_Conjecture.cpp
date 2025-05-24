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
    ll x, y, k;
    cin >> x >> y >> k;
    ll cnt = 0;
    while(k > 0){
        cnt++;
        ll inc;
        if(x % y == 0) inc = 1;
        else inc = y - (x % y);
        if(inc > k){
            //cout << "d";
            x += k;
            break;
        }
        x += inc;
        k -= min(k, inc);
        //cout << x << nl
        //cout << inc << nl;
        while((x % y) == 0){
            x /= y;
        }
        if(x == 1) break;
        //cout << x << nl;
    }  
    if(x != 1){
        cout << x << nl;
        return;
    }
    if((y - 1) > k){
        cout << x + k << nl;
    }else{
        cout << x + (k % (y - 1)) << nl;
    }
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