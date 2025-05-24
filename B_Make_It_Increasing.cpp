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
    ll one = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1) one++;
    }

    if(n == 1){
        cout << 0 << nl;
        return;
    }

    if(arr[n - 1] == 1 && one > 2){
        cout << -1 << nl;
        return;
    }

    ll ope = 0;
    ll mn = arr[n - 1];
    for(int i = n - 1; i > 0; i--){
        mn = min(arr[i], mn);
        if(arr[i - 1] >= mn){
            while(arr[i - 1] >= mn && arr[i - 1] > 0){
                arr[i - 1] /= 2;
                ope++;
            }
        }
    }

    // for(auto it: arr){
    //     cout << it << " ";
    // }
    // cout << nl;

    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            cout << -1 << nl;
            return;
        }
    }
    cout << ope << nl;
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