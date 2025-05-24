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
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    map<ll, ll> mp;
    vector<ll> ans;
    ans.push_back(arr[0]);
    mp[0] = -1;
    ll curr_gcd = arr[0];
    for (int i = 0; i < n; i++) {
        ll last_gcd = -1;
        ll curr_digit = -1;
        ll ind = -1;
        for (int j = 1; j < n; j++) {
            if (mp[j] == -1) continue;
            ll xd = __gcd(curr_gcd, arr[j]); 
            // cout << arr[j] << " " << xd << nl;
            if (xd > last_gcd) {
                last_gcd = xd;
                curr_digit = arr[j];
                ind = j;
            }
        }
        // cout << nl;
        // cout << curr_digit << nl;
        // cout << nl;
        mp[ind] = -1;
        curr_gcd = __gcd(curr_gcd, curr_digit);
        //cout << curr_gcd << nl;
        //cout << last_gcd << " " << curr_digit << nl;
        //cout << nl;
        if (curr_digit != -1) ans.push_back(curr_digit);
    }   

    for (int i = 0; i < n; i++) {
        if (mp[i] != -1) {
            ans.push_back(arr[i]);
        }
    }

    for (auto it: ans) cout << it << " ";
    cout << nl;
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