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
    ll sz = n * k;
    vector<ll> arr(sz);
    for(int i = 0; i < sz; i++){
        cin >> arr[i];
    }   
    
    ll mid = ceil(n / (2 * 1.0));
    
    ll diff = n - mid + 1;
    //cout << diff << nl;
    ll front = 0;
    ll sum = 0;
    for(int i = sz - diff; i >= 0; i -= diff){
        if(i < front) break;
        sum += arr[i];
        front += mid - 1;
    }
    cout << sum << nl;
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