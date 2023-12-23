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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n+1);
    vector<ll> brr(n+1);
    for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++) cin >> brr[i];
    ll ans = 0;
    ll mx = -1;
    ll sum = 0;
    ll temp_ans = 0;
    for(int i=1; i<=n && k>=i; i++){
        sum += arr[i];
        temp_ans += sum;
        mx = max(mx, brr[i]);
        temp_ans += mx*(k-i);
        ans = max(temp_ans, ans);
        temp_ans = 0;
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