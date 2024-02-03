#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;

bool isSquare(ll n){
    ll temp = sqrt(n);
    return temp * temp == n;
}


void solve(){
    ll n;
    cin >> n;
    if(n == 1){
        NO;
        return;
    }
    if(n % 2 != 0){
        NO;
        return;
    }
    if(isSquare(n / 2)){
        YES;
        return;
    }
    if(n % 4 != 0){
        NO;
        return;
    }
    if(isSquare(n / 4)){
        YES;
        return;
    }

    NO;
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
