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
    vector<ll> brr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    vector<ll> pref(n, 0);
    pref[0] = brr[0];
    for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + brr[i];

    vector<ll> suff1(n + 1, 0);
    suff1[n - 1] = arr[n - 1];
    suff1[n] = 0;
    for (int i = n - 2; i >= 0; i--) suff1[i] = suff1[i + 1] + arr[i];

    ll mn = suff1[1];
    for (int i = 1; i < n; i++) {
        //cout << pref[i - 1] << " " << suff1[i + 1] << nl;
        ll current_score = max(pref[i - 1], suff1[i + 1]); 
        mn = min(mn, current_score);
    }

    cout << mn << nl;
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