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
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }    
    if (sum % n != 0) {
        cout << -1 << nl;
        return;
    }

    ll avg = sum / n;
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    ll rem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != avg) {
            rem++;
        }
    }

    ll spared = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            spared += arr[i];
        }
    }
    cout << spared << nl;
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