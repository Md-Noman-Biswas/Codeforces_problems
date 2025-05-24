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
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    vector<ll> back_up(arr.begin(), arr.end());

    deque<ll> small;
    deque<ll> large;
    
    for (int i = 0; i < n - k; i++) {
        small.push_back(arr[i]);
    }

    for (int i = n - k; i < n; i++) {
        large.push_back(arr[i]);
    }

    reverse(small.begin(), small.end());
    reverse(large.begin(), large.end());

    deque<ll> perm;

    for (int i = 0; i < large.size(); i++) {
        perm.push_back(large[i]);
        if (!small.empty()) {
            perm.push_back(small.front());
            small.pop_front();
        }
    }

    while (!small.empty()) {
        perm.push_back(small.front());
        small.pop_front();
    }

    // for (auto it: perm) cout << it << " ";
    // cout << nl;
    
    ll score1 = 0;
    ll temp = k;
    for (int i = 0; i < n - 1; i++) {
        if (temp <= 0 || perm.empty()) break;
        ll ind1 = perm.front();
        perm.pop_front();
        ll ind2 = perm.front();
        perm.pop_front();
        //cout << ind1 << " " << ind2 << nl;
        score1 += ind2 / ind1;
        temp--;
    }
    for (auto it: perm) score1 += it;
    cout << score1 << nl;
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