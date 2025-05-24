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
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll gcd1 = arr[0];
    for(int i = 2; i < n; i += 2){
        gcd1 = __gcd(gcd1, arr[i]);
    }
    ll gcd2 = arr[1];
    for(int i = 1; i < n; i += 2){
        gcd2 = __gcd(gcd2, arr[i]);
    }
    bool flag1 = true;
    bool flag2 = true;
    for(int i = 0; i < n; i += 2){
        if(arr[i] % gcd2 == 0){
            flag1 = false;
            break;
        }
    }

    for(int i = 1; i < n; i += 2){
        if(arr[i] % gcd1 == 0){
            flag2 = false;
            break;
        }
    }

    if(flag1 == true){
        cout << gcd2 << nl;
    }
    else if(flag2 == true){
        cout << gcd1 << nl;
    }else{
        cout << 0 << nl;
    }
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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