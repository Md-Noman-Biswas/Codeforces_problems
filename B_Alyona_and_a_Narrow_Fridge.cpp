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
const int INF = 1e9 + 10;

bool predicate(ll mid, vector<ll> &arr, ll h){
    vector<ll> temp;
    for(int i = 0; i < mid; i++){
        temp.push_back(arr[i]);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    ll required_height = 0;
    for(int i = 0; i < temp.size(); i += 2){
        required_height += temp[i];
    }
    return required_height <= h; 
}

void solve(){
    ll n, h;
    cin >> n >> h;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll l = 0;
    ll r = n;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid, arr, h)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans << nl;

}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}