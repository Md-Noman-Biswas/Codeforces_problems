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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> arr(n + 1);
    vector<ll> pref(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }   
    ll ans = llmn;
    sort(arr.begin(), arr.end());

    pref[0] = arr[0] = 0;
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + arr[i];
    }

    // for(auto it: pref){
    //     cout << it << " ";
    // }
    // cout << nl;
    
    for(int i = n; i >= 0; i--){
        ll remove = n - i;
        if(remove > k) break;
        ll x1 = min(i*1LL, x);
        //cout << x1 << nl;
        //cout << index << nl;
        ll diff = pref[i-x1] - (pref[i] - pref[i-x1]);
        //cout << diff << nl;
        ans = max(diff, ans);
    }
    cout << ans << nl;
}

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