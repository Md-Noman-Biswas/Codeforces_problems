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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    ll l = 0;
    ll r = n-1;
    ll left = 0;
    ll right = 0;
    ll candies = 0;
    ll ans = 0;
    ll cnt1 = 0;
    ll cnt2 = 0;
    while(l <= r){
        if(left <= right){
            left += arr[l];
            l++;
            cnt1++;
        }
        else if(left > right){
            right += arr[r];
            r--;
            cnt2++;
        }
        if(left == right){
        candies = cnt1 + cnt2;
        ans = max(ans, candies);
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