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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == c){
        cout << d << " " << a << " " << d << " " << d << nl;
    }
    if(c == d){
        cout << a << " " << d << " " << c << " " << b << nl;
    }
    if(b == d){
        cout << a << " " << c << " " << c << " " << c << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}