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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll sum = 0;
    ll cnt = 1;
    for(int i=n-1; i>=0; i--){
        sum += arr[i];
        if(sum / cnt >= k){
            ans = max(ans, cnt);
        }
        cnt++;
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