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
    vector<ll> even, odd;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even.push_back(i);
        else odd.push_back(i);
    }   
    if (n % 2 == 0) {
        if (even.size() != odd.size()) {
            cout << -1 << nl;
            return;
        }
    }
    else {
        ll sz1 = even.size(), sz2 = odd.size();
        if (abs(sz1 - sz2) > 1) {
            cout << -1 << nl;
            return;
        }
    }
    
    //even first
    ll x = 0;
    ll e = 0;
    ll o = 0;
    ll cnt1 = 0;

    // for (auto it: even) cout << it << " ";
    // cout << nl; 
    for (int i = 0; i < n; i += 2) {
        if (arr[i] % 2 != 0) {
            cnt1 += (abs(i - even[e]));
            e++;
        }
        else{
            e++;
        }
    }
    ll cnt2 = 0;
    //odd first
    for (int i = 0; i < n; i += 2) {
        if (arr[i] % 2 == 0) {
            cnt2 += (abs(i - odd[o]));
            o++;
        }
        else {
            o++;
        }
    }
    for (auto it: odd) cout << it << " ";
    cout << nl; 
    cout << cnt2 << nl;
    
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