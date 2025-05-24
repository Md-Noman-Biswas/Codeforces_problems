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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }   
    sort(arr.begin(), arr.end());
    ll total = 0;
    for (auto it: arr) {
        total += (arr.back() - it);
        //st.insert(it);
    }
    ll diff = k;
    ll score = 0;
    for (int i = n - 2; i >= 0; i -= 2) {
        if (diff == 0) {
            break;
        }
        ll alice = arr[i + 1];
        ll bob = arr[i];
        ll temp = alice - bob;
        ll change = min(alice - bob, diff);
        //cout << change << nl;
        diff -= change;
        //cout << diff << nl;
        arr[i] += change;
    }

    // for (auto it: arr) cout << it << " ";
    // cout << nl;

    set<ll> st;
    for (auto it: arr) {
        st.insert(it);
    }

    if (n % 2 != 0) {
        for (int i = n - 2; i >= 1; i -= 2) {
            score += abs(arr[i + 1] - arr[i]);
        }
        score += arr[0];
    }
    else {
        for (int i = n - 2; i >= 0; i -= 2) {
            score += abs(arr[i + 1] - arr[i]);
        }
    }
    if(total <= k) {
        if (n % 2 == 0) score = 0;
        else score = arr[0];
    }
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << nl;

    cout << score << nl;
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