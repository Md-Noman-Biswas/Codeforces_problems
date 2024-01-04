#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(m);
    ll mx = INT_MIN;
    ll mn = INT_MAX;
    ll ans = INT_MAX;

    map<ll, ll> mp;
    for(int i=0; i<m; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for(auto it: mp){
        if(it.second >= n){
            cout << 0 << nl;
            return;
        }
    }

    sort(arr.begin(), arr.end());


    for(int i=0; i<m-n+1; i++){
        ll cnt = 0;
        ll index = i;
        mn = arr[i];
        mx = arr[i+n-1];
        ans = min(mx-mn, ans);
    }
    cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}