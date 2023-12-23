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
    ll n, t;
    cin >> n >> t;
    if(t == 10){
        if(n == 1){
            cout << -1 << nl;
            return;
        }
        for(int i=0; i<n-1; i++){
            cout << 1;
        }
        cout << 0 << nl;
    }else{
        for(int i=0; i<n; i++){
            cout << t;
        }
        cout << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}