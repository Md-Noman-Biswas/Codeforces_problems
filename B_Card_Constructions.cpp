#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

vector<ll> possibility(N);

void pre(){
    for(ll i=1; i<=100000; i++){
        possibility[i] = i*(3*i + 1)/2;//1LL
    }
}

void solve(){
    ll n;
    cin >> n;
    ll ans = 0;

    while(n > 1){
        int i = upper_bound(possibility.begin(), possibility.end(), n) - possibility.begin();
        i--;
        n -= possibility[i];
        ans++;
    }
    cout << ans << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    pre();
    while(t--) {
        solve();
    }
    return 0;
}
