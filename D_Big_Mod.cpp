#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binExp(ll a, ll b, ll m){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL *a) % m;
        b = b >> 1;
    }
    return ans;
}

void solve(ll b, ll p, ll m){
    cout << binExp(b, p, m) << "\n";
}

signed main(){
    ll b,p,m;
    while(cin >> b >> p >> m){
        solve(b,p,m);
    }
    return 0;
}