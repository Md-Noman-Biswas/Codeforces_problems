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
    ll mx = -1;
    ll ind = -1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > mx){
            mx = arr[i];
            ind = i;
        }
    }   
    ll second_mx = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > second_mx && i != ind){
            second_mx = arr[i];
        }
    }

    if(ind != n - 1){
        cout << mx + arr[n - 1] << nl;
    }else{
        cout << mx + second_mx << nl;
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