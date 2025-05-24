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
    vector<ll> arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    vector<ll> anss(n + 1);
    int l = 0;
    for(int i = 1; i <= n; i++){
        ll r = i;
        ll l = 1;
        ll ans = 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[i - mid + 1] >= mid){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        } 
        anss[i] = ans;
    }   
    for(int i = 1; i <= n; i++){
        cout << anss[i] << " ";
    }
    cout << nl;
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