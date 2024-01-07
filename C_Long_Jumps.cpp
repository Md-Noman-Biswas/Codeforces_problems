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
    for(int i=1; i<=n; i++) cin >> arr[i];
    vector<ll> brr(n+1, 0);
    for(int i=n; i>0; i--){
        brr[i] = arr[i];
        if(i + arr[i] <= n){
            brr[i] += brr[i+arr[i]];
        }
    }
    sort(brr.begin(), brr.end());
    cout << brr.back() << nl;

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