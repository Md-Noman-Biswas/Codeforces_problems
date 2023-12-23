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
        ll initial = 1;
        ll current = 0;
        ll ans = 0;
        for(int i=0; i<m; i++){
            cin >> current;
            if(current >= initial){
                ans += (current - initial);
                initial = current;
            }else{
                ans += n - (initial - current);
                initial = current;
            }
        }
        cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
