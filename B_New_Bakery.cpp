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
    ll n, a, b;
    cin >> n >> a >> b;
    ll k = 0;
    ll temp = b - a + 1;
    ll temp_sum = b * (b + 1) / (2 * 1.0);
    if(temp >= n){
        k = n - 1;
    }else{
        k = temp - 1;
    }
    if(k < 0){
        cout << n * a << nl;
        return;
    }
    //cout << temp << nl;
    //cout << k << nl;
    ll rem = n - (k + 1);
    //cout << b << nl;
    ll sum = ((k + 1) / (2*1.0)) * (2 * b - k);
    sum += rem * a;
    cout << sum << nl;
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