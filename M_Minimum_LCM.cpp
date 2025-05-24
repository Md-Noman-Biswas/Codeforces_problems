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

ll lcm(ll a, ll b){
    ll temp = __gcd(a, b);
    ll ans = (a * b) / temp;
    return ans;
}

void solve(){
    ll n;
    cin >> n;
    bool ans = false;
    map<ll, pair<ll, ll>> mp;
    ll a, b; 
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            ll temp = lcm(i, n - i);
            mp[temp] = {i, n - i};
            if(n / i != i){
                ll another_divisor = n / i;
                ll temp = lcm(another_divisor, n - another_divisor);
                mp[temp] = {another_divisor, n - another_divisor};
            }
        }
    }   

    ll cnt = 0;
    for(auto it: mp){
        if(cnt == 1){
            a = it.second.first;
            b = it.second.second;
            break;
        }
        cnt++;
    }
    cout << a << " " << b << nl;
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