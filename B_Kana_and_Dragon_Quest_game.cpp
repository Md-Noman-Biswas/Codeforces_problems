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
    ll x, n, m, initial;
    cin >> initial >> n >> m;
    x = initial;

    while(x > 0 && n > 0 && x/2 + 10 < x){
        x /= 2;
        x += 10;
        n--;
    }
    
    x -= (10*m);
    if (x <= 0) {
        YES;
    } else {
        NO;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
