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
    ll n, x, k;
    cin >> n >> k >> x;
    vector<ll> arr(n);
    vector<ll> suff(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   
        sum += arr[i];
    }
    if (sum * k < x) {
        cout << 0 << nl;
        return;
    }
    suff[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) suff[i] = suff[i + 1] + arr[i];
    
    ll ind = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (suff[i] >= x) {
            ind = i + 1;
            break;
        }
    }
    // cout << ind << nl;
    if (ind == 0) ind = n;
    if (ind == -1) {
        ll xd = sum;
        ll times = x / sum;

        ll total = times * sum;
        ll diff = x - total;
        ll cnt = 0;
        if (diff == 0) {
            cout << n * k -  (times * n - 1) << nl;
        }
        else {  
            ll current_total = total;
            for (int i = n - 1; i >= 0; i--) {
                if (current_total + arr[i] >= x) {
                    break;
                }
                current_total += arr[i];
                cnt++;
            }
            cout << n * k - (times * n + cnt) << nl;
        }
    }
    else {
        cout << n * k - (n - ind) << nl;
    }
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