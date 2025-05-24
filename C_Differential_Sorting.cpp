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

bool check(ll x, ll y, vector<ll> &arr){
    for(int i = x; i < y; i++){
        if(arr[i + 1] < arr[i]){
            return false;
        }
    }
    return true;
}

bool check_dec(ll x, ll y, vector<ll> &arr){
    for(int i = x; i < y; i++){
        if(arr[i] <= arr[i + 1]){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll ind = -1;
    if(check_dec(0, n - 1, arr)){
        cout << -1 << nl;
        return;
    }
    if(check(0, n - 1, arr)){
        cout << 0 << nl;
        return;
    }
    if(arr.back() < 0){
        cout << -1 << nl;
        return;
    }
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] <= arr.back()){
            ind = i;
            break;
        }
    }
    if(n - 1 - ind > 1){
        cout << -1 << nl;
    }else{
        cout << ind << nl;
        for(int i = 0; i < ind; i++){
            cout << i + 1 << " " << ind + 1 << " " << n << nl;
        }
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