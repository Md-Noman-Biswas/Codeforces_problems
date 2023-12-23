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
    ll n, x;
    cin >> n >> x;
    int cnt = 0;
    for(int i=2; i<=n; i++){
        if(x%i == 0){
            if(x/i <= n){
                cnt++;
            }
        }
    }
    if(n >= x) cnt++;
    cout << cnt << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}