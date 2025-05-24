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
    ll sum = 0;
    ll mn = 0;
    vector<ll> pref(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   

    pref[0] = arr[0];
    for(int i = 1; i < n; i++){
        pref[i] = arr[i] + pref[i - 1];
    }
    ll ans = pref[n - 1];
    //cout << pref[n - 1] << nl;
    for(int i = 0; i < n; i++){
        if(pref[i] < 0){
            ll temp = abs(pref[i]) + (pref[n - 1] - pref[i]);
            //cout << temp << nl;
            ans = max(temp, ans);
        }
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