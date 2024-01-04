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
    ll n, d;
    cin >> n >> d;
    if(n == d){
        YES;
        return;
    }
    ll x = 1;
    ll temp;

    while(1){
        temp = ceil(d*1.0/(x + 1));
        //cout << temp << nl;
        n--;
        x++;
        if(n >= temp || n == 0) break;
    }
    if(n != 0){
        YES;
    }else{
        NO;
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