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

bool cmp(int a, int b){
    return a > b;
}


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> brr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> brr[i];
    vector<ll> diff;
    for(int i = 0; i < n; i++){
        diff.push_back(brr[i] - arr[i]);
    }
    sort(diff.begin(), diff.end(), cmp);
    ll l = 0;
    ll r = n - 1;
    ll cnt = 0;
    while(l < r){
        if(diff[l] + diff[r] >= 0){
            cnt++;
            l++;
            r--;
        }else{
            r--;
        }
    }
    cout << cnt << nl;
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