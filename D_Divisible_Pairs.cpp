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
    ll n, x, y; 
    cin >> n >> x >> y;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    map<pair<ll, ll>, ll> mp;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll a = (x - arr[i]%x)%x;
        ll b = arr[i]%y;
        ans += mp[{a, b}];
        mp[{arr[i]%x, arr[i]%y}]++;
    }
    cout << ans << endl;
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