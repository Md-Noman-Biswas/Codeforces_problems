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
    ll n, m, d;
    cin >> n >> m >> d;
    set<ll> st;
    ll sum = 0;
    vector<vector<ll>> arr(n, vector<ll> (m));
    vector<ll> straight;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            straight.push_back(arr[i][j]);
            st.insert(arr[i][j] % d);
            sum += arr[i][j];
        }
    }   
    if (st.size() > 1) {
        cout << -1 << nl;
        return;
    }

    sum /= (n * m);
    sort(straight.begin(), straight.end());

    ll avg_l = *lower_bound(straight.begin(), straight.end(), sum);
    ll avg_h = *upper_bound(straight.begin(), straight.end(), sum);
    ll mid = (n * m) / 2;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
    // for (int i = 0; i < straight.size(); i++) {
    //     ll diff = abs(straight[i] - avg_l);
    //     cnt1 += diff / d;
    // }
    // // cout << cnt1 << nl;

    // for (int i = 0; i < straight.size(); i++) {
    //     ll diff = abs(straight[i] - avg_h);
    //     cnt2 += diff / d;
    // }
    for (int i = 0; i < straight.size(); i++) {
        ll diff = abs(straight[i] - straight[mid]);
        cnt3 += diff / d;
    }
    cout << cnt3 << nl;
    // cout << min({cnt1, cnt2, cnt3}) << nl;
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
    solve();
    return 0;
}