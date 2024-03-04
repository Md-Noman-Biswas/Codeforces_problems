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
    ll mx_ind = -1;
    ll mn_ind = -1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > mx){
            mx = arr[i];
            mx_ind = i;
        }
        if(arr[i] < mn){
            mn = arr[i];
            mn_ind = i;
        }
    }   
    // cout << mx_ind << " " << mn_ind << nl;
    if(mn_ind == 0){
        cout << mx - mn << nl;
    }else{
        ll before_max = arr[mx_ind - 1];
        ll after_max = arr[mx_ind + 1];
        ll before_min = arr[mn_ind - 1];
        ll after_min = arr[mn_ind + 1];

        ll xd1 = max(mx - before_max, mx - after_max);
        ll xd2 = max(before_min - mn, after_min - mn);

        cout << max(xd1, xd2) << nl;
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