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

ll target_multiple(ll n, ll k){
    ll temp = ceil(k / (n * 1.0));
    return temp * n;
}

ll next_multiple(ll n, ll k){
    ll temp;
    if(k % n == 0){
        temp = k / n;
        temp++;
        return temp * n;
    }else{
        temp = ceil(k / (n * 1.0));
        return temp * n;
    }
}

void solve(){
    ll n, l, r;
    cin >> n >> l >> r;
    set<ll> taken;
    vector<int> ans(n + 1);
    for(int i = 1; i <= n; i++){
        ll temp = target_multiple(i, l);
        if(temp > r){
            NO;
            return;
        }else{
            ans[i] = temp;
        }
    }   
    YES;
    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << nl;
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