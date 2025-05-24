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
    ll n, m;
    cin >> n >> m;
    deque<ll> dq1;
    deque<ll> dq2;
    dq1.push_back(1);
    for (int i = 1; i < n; i++) {
        ll temp;
        cin >> temp;
        dq1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        dq2.push_back(temp);
    }

    sort(dq1.begin(), dq1.end());
    sort(dq2.begin(), dq2.end());
    ll ope = 0;

    // while (!dq1.empty()) {
    //     ll mx_upper = dq1.back();
    //     ll mx_lower = dq2.back();
    //     if (mx_upper >= mx_lower) {
    //         dq1.pop_back();
    //         dq2.pop_front();
    //         ope++;
    //     }
    //     else {
    //         break;
    //     }
    // }

    ll l = 0;
    ll r = 0;
    while (l < dq1.size() && r < dq2.size()) {
        if (dq1[l] >= dq2[r]) {
            r++;
            ope++;
        }
        else {
            l++;
            r++;
        }
    }

    cout << ope << nl;
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