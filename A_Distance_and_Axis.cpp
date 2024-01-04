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

void solve(){
    ll n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n){
            cout << 0 << nl;
        }else{
            cout << k - n << nl;
        }
    }else{
        if(k >= n){
            cout << k - n << nl;
        }else{
            cout << n - k << nl;
        }
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