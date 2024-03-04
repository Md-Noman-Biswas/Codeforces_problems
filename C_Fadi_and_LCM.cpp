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
    ll n;
    cin >> n;
    ll max_a = llmn;
    ll max_b = llmx;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            ll a = i;
            ll b = n / i;
            if(__gcd(a, b) == 1){
                if(max(a, b) < max(max_a, max_b)){
                    max_a = a;
                    max_b = b;
                }
            }
        }
    }   
    cout << max_a << " " << max_b << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}