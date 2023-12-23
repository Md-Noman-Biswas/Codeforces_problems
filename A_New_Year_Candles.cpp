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
    float a, b;
    cin >> a >> b;
    float ans = 0;
    ans = a;
    float temp = a/b;
    ans += temp;
    //cout << ans << nl;
    while(temp >= 1){
        temp /= b;
        ans += temp;
        //cout << temp << nl;
    }
    cout << (int)ans << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}