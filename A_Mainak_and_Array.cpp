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
    ll mn = llmx;
    ll mx = llmn;
    ll mn_index = 0;
    ll mx_index = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n == 1){
        cout << 0 << nl;
        return;
    }

    ll v1 = llmn;
    for(int i = 1; i < n; i++){
        ll diff = arr[i] - arr[0];
        v1 = max(diff, v1);
    }

    ll v2 = llmn;
    for(int i = n - 2; i >= 0; i--){
        ll diff = arr[n - 1] - arr[i];
        v2 = max(diff, v2);
    }

    ll v3 = llmn;
    for(int i = 0; i < n - 1; i++){
        ll diff = arr[i] - arr[i + 1];
        v3 = max(diff, v3);
    }

    ll temp1 = max(v1, v2);
    cout << max(temp1, v3) << nl;
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