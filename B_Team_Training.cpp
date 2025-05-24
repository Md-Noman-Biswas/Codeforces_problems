#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr.begin(), arr.end());

    ll cnt = 0;
    ll current_mn = llmx;
    ll member = 0;
    for (int i = 0; i < n; i++) {
        current_mn = min(current_mn, arr[i]);
        member++;
        if (current_mn * member >= x) {
            cnt++;
            current_mn = llmx;
            member = 0;
        }
    }

    reverse(arr.begin(), arr.end());
    ll cnt2 = 0;
    current_mn = llmx;
    member = 0;
    for (int i = 0; i < n; i++) {
        current_mn = min(current_mn, arr[i]);
        member++;
        if (current_mn * member >= x) {
            cnt2++;
            current_mn = llmx;
            member = 0;
        }
    }
    cout << max(cnt, cnt2) << nl;
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