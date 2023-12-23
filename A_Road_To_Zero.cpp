#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll cost = 0;
    if(a == 0 && b == 0){
        cout << 0 << nl;
        return;
    }
    if(2*a >= b){
        cost += (abs(x-y)*a);
        cost += (min(x,y)*b);
    }else{
        cost += (x+y)*a;
    }
    cout << cost << nl;
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