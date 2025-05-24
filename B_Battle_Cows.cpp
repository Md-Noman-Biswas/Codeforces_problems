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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<ll> copy(arr.begin(), arr.end());
    
    ll first_greater = k - 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[k - 1]){
            first_greater = i;
            swap(copy[i], copy[k - 1]);
            break;
        }
    }
 
    ll second_greater = k - 1;
    for(int i = 0; i < n; i++){
        if(copy[i] > copy[first_greater]){
            second_greater = i;
            break;
        }
    }

    // for(auto it: copy){
    //     cout << it << " ";
    // }
    // cout << nl;

    ll ans1 = 0, ans2 = 0;

    ans1 = (second_greater - first_greater - 1);
    if(first_greater != 0) ans1++;
    ans2 = first_greater - 0 - 1;
    ll ans3 = 0;
    if(first_greater == k - 1) ans3 = n - 1;
    // cout << first_greater << " " << second_greater << nl;

    // cout << ans1 << " " << ans2 << nl;

    cout << max({ans1, ans2, ans3}) << nl;

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