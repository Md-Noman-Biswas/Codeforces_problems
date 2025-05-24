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
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = 0;
    sum += (a + b + c);
    if(sum % 2 != 0){
        cout << -1 << nl;
        return;
    }
    ll temp = a + b;
    ll cnt = 0;
    if(temp > c){
        while(temp > c){
            temp -= 2;
            cnt++;
        }
    }else{
        cout << temp << nl;
        return;
    }
    if(temp == c){
        cout << cnt + c << nl;
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