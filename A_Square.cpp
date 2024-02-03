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
ll x1, x2, x3, x4, x5, x6, x7, x8;

ll area(ll a1, ll a2,ll b1,ll b2){
    return sqrt(abs(a1 - b1) + abs(a2 - b2));
}

void solve(){
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8;
    if(x1 == x5){
        ll x = abs(x1 - x5) + abs(x2 - x6); 
        cout << x * x << nl;
    }   
    if(x1 == x3){
        ll x = abs(x1 - x3) + abs(x2 - x4);
        cout << x * x << nl;
    }
    if(x1 == x7){
        ll x = abs(x1 - x7) + abs(x2 - x8);
        cout << x * x << nl;
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