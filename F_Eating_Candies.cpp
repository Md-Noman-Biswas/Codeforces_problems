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

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll l = 0; 
    ll r = n - 1;
    ll ans = 0;
    ll alice = arr[l];
    ll bob = arr[r];
    while(l < r){
        if(alice > bob){
            //cout << alice << " " << bob << nl;
            while(bob < alice){
                r--;
                bob += arr[r]; 
            }
        }
        else if(bob > alice){
            while(alice < bob){
                l++;
                alice += arr[l];
            }
            //cout << alice << " " << bob << nl;
        }else{
            ans = l + (n - r + 1);
            l++;
            r--;
            alice += arr[l];
            bob += arr[r];
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}