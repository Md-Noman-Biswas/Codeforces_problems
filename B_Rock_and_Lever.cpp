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
    vector<bool> vis(n, 0);
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll ans = 0;
    for(int i = 31; i >= 0; i--){
        ll cnt = 0;
        for(int j = 0;  j < n; j++){
            if(((arr[j]) & (1 << i)) && !vis[j]){
                //cout << cnt << nl;
                cnt++;
                vis[j] = true;
            }
        }
        ans += (cnt * (cnt - 1) / 2);
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