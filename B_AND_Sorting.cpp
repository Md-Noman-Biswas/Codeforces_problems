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
bool power_of_2(ll n){
    if(n == 0) return true;
    if(n == 1) return true;
    return ((n & (n - 1)) == 0);
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> power;
    vector<ll> misplaced;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != arr[i]){
            misplaced.push_back(arr[i]);
        }
    }

    ll ans = (1 << 31) - 1;
    for(int i = 0; i < misplaced.size(); i++){
        ans &= misplaced[i];
    }
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