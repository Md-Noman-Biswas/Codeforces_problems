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
    ll m, n;
    cin >> m >> n;   
    vector<ll> arr(m);
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll cnt = 0;
    for(int i=0; i<m; i++){
        if(arr[i] < 0){
            cnt++;
            ans += abs(arr[i]);
        }
        if(cnt >= n) break;
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