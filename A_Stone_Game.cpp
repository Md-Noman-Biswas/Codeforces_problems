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
    ll mn = llmx, mx = llmn;
    ll mn_ind, mx_ind;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == mn) mn_ind = i;
        if (arr[i] == mx) mx_ind = i;
    }   
    ll cnt_2 = llmx;
    ll v1 = 0;
    if (mn_ind < n / 2 && mx_ind > n / 2) {
        v1 += mn_ind + 1;
        v1 += n - mx_ind;
        cnt_2 = v1;
    }
    ll v2 = 0;
    if (mx_ind < n / 2 && mn_ind > n / 2) {
        v2 += mx_ind + 1;
        v2 += n - mn_ind;
        cnt_2 = v2; 
    }

    bool f1 = false, f2 = false;
    ll cnt1 = 0;
    for (int i = 0; i < n; i++) {
        cnt1++;
        if (arr[i] == mn) {
            f1 = true;
        }
        if (arr[i] == mx) {
            f2 = true;
        }
        if (f1 & f2) break;
    }
    f1 = false, f2 = false;
    ll cnt2 = 0;
    for (int i = n - 1; i >= 0; i--) {
        cnt2++;
        if (arr[i] == mn) {
            f1 = true;
        }
        if (arr[i] == mx) {
            f2 = true;
        }
        if (f1 & f2) break;
    }
    cout << min({cnt1, cnt2, cnt_2}) << nl;
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