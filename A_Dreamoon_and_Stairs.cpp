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
    ll n, m;
    cin >> n >> m;
    ll temp = 0;
    int cnt = 0;
    if(n < m ){
        cout << -1 << nl;
        return;
    }
    temp = n/2;
    if(n%m == 0){
        ll x = 0;
        while(x < temp){
            //cout << x << nl;
            x += m;
        }
        cout << x << nl;
    }else{
            ll x = 0;
        while(x < temp + 1){
            //cout << x << nl;
            x += m;
        }
        cout << x << nl;
    }
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}