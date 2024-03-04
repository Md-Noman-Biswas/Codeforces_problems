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
    ll n;
    cin >> n;
    ll a, b;
    cin >> a >> b;
    bool flag = false;
    if(a == 1){
        if((n - 1) % b == 0){
            flag = true;
            YES;
            return;
        }else{
            NO;
            return;
        }
    }

    for(ll i = 1; i <= n; i *= a){
        if((n - i) % b == 0){
            flag = true;
            break;
        }
    }

    if(flag) YES;
    else NO;
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