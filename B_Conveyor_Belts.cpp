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
ll n, a, b, c, d;

ll yoo(ll x){
    ll temp1 = x;
    ll temp2 = n - (x - 1);
    return(min(temp1, temp2));
}

void solve(){
    cin >> n >> a >> b >> c >> d;
    ll level1 = min(yoo(a), yoo(b));
    ll level2 = min(yoo(c), yoo(d));

    cout << abs(level1 - level2) << nl;
}

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