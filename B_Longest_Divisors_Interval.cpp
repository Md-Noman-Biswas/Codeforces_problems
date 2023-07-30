#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5;
void solve(){
    ll n;
    cin >> n;
    int cnt = 0;
    int ans = -1;
    for(int i=1; i<=100; i++){
        if(n % i == 0){
            cnt++;
        }else{
            cnt = 0;
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}