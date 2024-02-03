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
    vector<ll> arr(n+1);
    ll cnt = 0;
    map<ll, ll> mp;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        ll x = arr[i] - i;
        mp[x]++;
    }
    
    ll ans = 0;
    for(auto it: mp){
        ll temp =  it.second - 1;
        ans += (temp*(temp+1)/2);
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