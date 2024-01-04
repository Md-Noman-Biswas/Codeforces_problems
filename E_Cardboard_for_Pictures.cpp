#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 2e5 + 7;
ll n, c;


bool predicate(ll mid, vector<ll> &arr){
    ll total = 0;
    for(int i=0; i<arr.size(); i++){
        total += (2*mid + arr[i])*(2*mid + arr[i]);
        if(total > c) return false;
    }
    return true;
  
}

void solve(){
    cin >> n;
    cin >> c;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }   
    ll l = 0;
    ll h = 1e10;
    ll ans = 0;
    while(l <= h){
        ll mid = l + (h-l)/2;
        if(predicate(mid, arr)){
            ans = mid;
            l = mid + 1;
        }else{
            h = mid - 1;
        }
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