#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    int temp1 = n-2;
    int temp2 = n-3;
    for(int i=2; i<=10000; i++){
        if((n-i-1) % 3 != 0 && (n-i-1) != 1 && (n-i-1) > 0 && i % 3 != 0 && (n-i-1) != i){
            cout << "YES" << nl;
            cout << 1 << " " << n-i-1 << " " << i << nl;
            return;
        }
    }
    cout << "NO" << nl;

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