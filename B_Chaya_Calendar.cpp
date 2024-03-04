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

ll next_multiple(ll n, ll k){
    if(n % k == 0 || n % 10 == 0) n++;
    ll temp = ceil(n / (k * 1.0)) * k;
    return temp;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);   
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
        if(n == 1){
        cout << arr[0] << nl;
        return;
    }
    ll ans = llmn;
    ll last = arr[0];
    for(int i = 1; i < n; i++){
        ll temp = next_multiple(last, arr[i]);
        //cout << temp << nl;
        ans = max(ans, temp);
        last = temp;
    }
    //cout << next_multiple(1000, 5) << nl;
    cout << ans << nl;

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