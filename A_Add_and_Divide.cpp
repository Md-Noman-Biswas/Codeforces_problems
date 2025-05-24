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
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;

    ll xd = a;
    ll ans = llmx;
    if(b == 1){
        cnt++;
        b++;
    }
    ll initial_cnt = cnt;
    ll temp = b;
    for(int i = 0; i < 100; i++){
        temp += i;
        initial_cnt += i;
        //cout << temp << nl;
        while(xd > 0){
            xd /= temp;
            initial_cnt++;
        }
        //cout << initial_cnt << nl << nl << nl;
        ans = min(ans, initial_cnt);
        temp = b;
        initial_cnt = cnt;
        xd = a;
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