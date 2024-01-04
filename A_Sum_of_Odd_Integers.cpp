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
    ll n, k;
    cin >> n >> k;
    if(n < k*k){
         NO;
         return;
    }
    if((n % 2 == 0) && (k % 2 == 0)){
        YES;
    }
    else if((n%2 != 0) && (k%2 != 0)){
        YES;
    }else{
        NO;
    }

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