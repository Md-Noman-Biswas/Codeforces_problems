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
    int a, b, c;
    cin >> a >> b >> c;
    int one = 0;
    int two = 0;
    int three = 0;
    if(abs(a-b) % 2 == 0) three = 1;
    if(abs(b-c) % 2 == 0) one = 1;
    if(abs(a-c) % 2 == 0) two = 1;
    cout << one << " " << two << " " << three << " " << nl;
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