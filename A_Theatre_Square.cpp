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
    ll n, m, a;
    cin >> n >> m >> a;
    ll temp1 = n/a + (n%a != 0);
    ll temp2 = m/a + (m%a != 0);
    cout << temp1*1LL*temp2 << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}