#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, s;
    cin >> n >> s;
    int coin = s/n;
    if(coin * n >= s) cout << coin << "\n";
    else cout << ++coin << "\n";

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}