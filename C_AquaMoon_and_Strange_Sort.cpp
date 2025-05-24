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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    set<ll> st;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    map<ll, ll> even, odd;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even[arr[i]]++;
        }
        else {
            odd[arr[i]]++;
        }
    }

    map<ll, ll> even2, odd2;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even2[arr[i]]++;
        }
        else {
            odd2[arr[i]]++;
        }
    }
    for (auto it: st) {
        if (even[it] != even2[it] || odd[it] != odd2[it]) {
            NO;
            return;
        }
    }
    YES;
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