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
    vector<ll> brr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> brr[i];

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    
    bool flag = true;
    if(arr[0] <= brr[0]){
        flag = false;
    }
    
    if(!flag){
        cout << 0 << nl;
        return;
    }
    ll ans = 1;
    for(int i = 0; i < n; i++){
        ll l = i; 
        ll h = n - 1;
        ll index;
        while(l <= h){
            ll mid = l + (h - l) / 2;
            if(brr[mid] < arr[i]){
                index = mid;
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
        ans *= (index - i + 1);
        ans %= mod;
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