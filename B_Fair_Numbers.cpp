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

// ll calculate_lcm(ll x, ll y){
//     ll temp = __gcd(x, y);
//     return ((x * y) / temp);
// }

// ll  lcm_of_digits(ll n){
//     ll lcm = 1;
//     ll temp = n;
//     while(temp){
//         ll x = temp % 10;
//         temp /= 10;
//         if(x == 0) continue;
//         lcm = calculate_lcm(lcm, x);
        
//     }
//     return lcm;
// }

// ll next_multiple(ll n, ll x){
//     //multiple of x greater than n
//     if(n % x == 0) return n;
//     ll temp = ceil((n * 1.0) / x);
//     return temp * x;
// }

void solve(){
    ll n;
    cin >> n;
    ll ans = 1;
    while(1){
        ll temp = n;
        while(temp > 0){
            ll xd = temp % 10;
            if(xd != 0 && n % xd != 0){
                break;
            }  
            temp /= 10;
        }
        if(temp == 0){
            ans = n;
            break;
        }
        n++;
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