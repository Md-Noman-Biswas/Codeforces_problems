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

bool predicate(ll x, ll k, ll mx){
    ll messages = 0;
    if(x <= k){
        messages += x * (x + 1) / 2;
    }else{
        messages += k * (k + 1) / 2;
        ll temp = k - 1;
        ll sum = temp * (temp + 1) / 2;
        ll rem = x - k;
        ll temp2 = temp - rem;
        sum -= (temp2 * (temp2 + 1) / 2);
        messages += sum;
    }
    return messages < mx;
}


void solve(){
    ll k, mx;
    cin >> k >> mx;   
    ll l = 0;
    ll r = 2 * k - 1;
    ll ans = 0;
    ll total = (k * (k + 1) / 2);
    ll temp = k - 1;
    total += temp * (temp + 1) / 2;
    if(total <= mx){
        cout << 2 * k - 1 << nl;
        return;
    }
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid, k, mx)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    ll messages = 0;
    if(ans <= k){
        messages += ans * (ans + 1) / 2;
    }else{
        messages += k * (k + 1) / 2;
        ll temp = k - 1;
        ll sum = temp * (temp + 1) / 2;
        ll rem = ans - k;
        ll temp2 = temp - rem;
        sum -= (temp2 * (temp2 + 1) / 2);
        messages += sum;
    }
    cout << ++ans << nl;
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