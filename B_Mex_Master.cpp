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
    map<ll, ll> mp;
    bool zero_one = true;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 1) zero_one = false;
        mp[arr[i]]++;
    }

    if(mp[0] == 0){
        cout << 0 << nl;
        return;
    }

    if(mp[1] == 0 && zero_one == true){
        cout << 1 << nl;
        return;
    }

    ll non_zero = n - mp[0];
  
    if(non_zero >= mp[0] || mp[0] == non_zero + 1){
        cout << 0 << nl;
    }
    else if(mp[0] <= 2){
        cout << 0 << nl;
    }
    else if(!zero_one){
        cout << 1 << nl;
    }
    else{
        ll ans = 0;
        for(int i = 2; i <= N; i++){
            if(mp.find(i) == mp.end()){
                ans = i;
                break;
            }
        }
        cout << ans << nl;
    }
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