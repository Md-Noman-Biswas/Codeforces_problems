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
    vector<ll> arr(n);
    ll zero = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0) zero++;
    }   
    if(zero == n){
        cout << 0 << nl;
        return;
    }
    ll seg = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == 0 && arr[i + 1] != 0){
            seg++;
        }
    }
    //if(arr[n - 1] == 0) seg++;
    if(arr[0] == 0) seg--;
    //if(arr[n - 1] == 0) seg--;
    seg++;
    if(seg > 2){
        cout << 2 << nl;
    }else{
        cout << seg << nl;
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