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
    ll n, m;
    cin >> n >> m;
    ll xd = n - (m - 1);
    --xd;
    ll mx = xd * (xd + 1) / 2;
    // cout << mx << nl;
    ll mn = 0;
    ll at_least = n / m;
    ll extra_places = n % m;
    ll extra_values = at_least + 1;
    ll at_least_places = m - extra_places;
    --at_least;
    mn += ((at_least * (at_least + 1)) / 2) * at_least_places;

    --extra_values;
    mn += ((extra_values * (extra_values + 1)) / 2) * extra_places;
    cout << mn << " " << mx << nl;
    
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
    solve();
    return 0;
}