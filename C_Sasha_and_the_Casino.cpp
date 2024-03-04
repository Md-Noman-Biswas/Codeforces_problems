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
    ll k, x, a;
    cin >> k >> x >> a;
    ll current = 1;
    x--;//because already bet 1 coin
    while(x--){
        ll next_bet = current / (k - 1);
        next_bet++;
        current += next_bet;
        if(current > a){
            NO;
            return;
        }
    }
    //cout << current << nl;
    ll left_till_now = a - current;
    //cout << left_till_now << nl;
    if(left_till_now * k <= a){
        NO;
    }else{
        YES;
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