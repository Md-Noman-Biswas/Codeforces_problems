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
    ll a, b;
    cin >> a >> b;
    if(b == 1) NO;
    else if(b == 2){
        YES;
        cout << a << " " << 2*a*b - a  << " " << 2*a*b << nl;
    }else{
        YES;
        cout << a << " " << a*b - a << " " << a*b << nl;
    }
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