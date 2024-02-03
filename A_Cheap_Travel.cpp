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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll cost = 0;
    ll ans = llmx;
    if(a >= b){
        cost += (n/m)*b;
        cost += ((n % m != 0)*b);
        ans = min(ans, cost);
    }else{
        if(n % m == 0){
            cost += (n/m * b);
            ans = min(ans, cost);
        }

        ll temp1 = n * a;;
        ans = min(ans, temp1);

        if(n % m != 0){
            ll x = n/m;
            x++;
            ll temp2 = x*b;
            ans = min(ans, temp2);
        }

        if(n % m != 0 && n/m != 0){
            ll x = n/m;
            ll temp3 = 0;
            temp3 += (x*b);
            temp3 += (n%m)*a;
            ans = min(ans, temp3);
        }
    }
    cout << ans << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}