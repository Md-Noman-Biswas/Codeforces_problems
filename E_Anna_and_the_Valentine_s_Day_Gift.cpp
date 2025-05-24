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

ll count_trailing_zeros(ll n) {
    ll cnt = 0;
    while (n % 10 == 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

ll count_digits(ll n) {
    ll cnt = 0;

    while (n) {
        n /= 10;
        cnt++;
    }

    return cnt;
}


void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    vector<pair<ll, ll>> trailing_zeros;
    vector<ll> hsh(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ll xd = count_trailing_zeros(arr[i]); 
        if (xd != 0) {
            hsh[i] = -1;
            trailing_zeros.push_back({xd, arr[i]});
        }
    }

    sort(trailing_zeros.begin(), trailing_zeros.end());
    reverse(trailing_zeros.begin(), trailing_zeros.end());
    ll total_digit = 0;
    // for (auto it: trailing_zeros) cout << it.first << " " << it.second << nl;
    
    for (int i = 0; i < trailing_zeros.size(); i++) {
        if (i % 2 == 0) {
            total_digit += count_digits(trailing_zeros[i].second) - trailing_zeros[i].first;
        }
        else {
            total_digit += count_digits(trailing_zeros[i].second);
        }
    }

    for (int i = 0; i < n; i++) {
        if (hsh[i] != -1) {
            total_digit += count_digits(arr[i]);
        }
    }
    if (total_digit - 1 >= m) {
        cout << "Sasha" << nl;
    }
    else {
        cout << "Anna" << nl;
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