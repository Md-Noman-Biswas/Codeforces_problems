#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "yes\n"
#define NO cout << "no\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

bool is_sortedd(deque<pair<ll, ll>> &dq) {
    for (int i = 0; i < dq.size() - 1; i++) {
        if (dq[i + 1].first >= dq[i].first) continue;
        else return false;
    }
    return true; 
}

void solve(){
    ll n;
    cin >> n;
    deque<pair<ll, ll>> dq;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dq.push_back({arr[i], i});
    }

    if (is_sorted(dq.begin(), dq.end())) {
        YES;
        cout << 1 << " " << 1 << nl;
        return;
    }

    while (dq.size() > 1) {
        ll temp1 = dq[dq.size() - 1].first;
        ll temp2 = dq[dq.size() - 2].first;
        if (temp1 > temp2) {
            dq.pop_back();
        }
        else {
            break;
        }
    }

    while (dq.size() > 1) {
        ll temp1 = dq[0].first;
        ll temp2 = dq[1].first;
        if (temp2 > temp1) {
            dq.pop_front();
        }
        else {
            break;
        }
    }

    // for (auto it: dq) cout << it.first << " ";
    // cout << nl;

    ll st = dq[0].second;
    ll end = dq.back().second;

    reverse(dq.begin(), dq.end());

    pair<ll, ll> ans;

    ans = {st, end};
    
    // for (auto it: dq) cout << it.first << " ";
    // cout << nl;

    for (int i = st - 1; i >= 0; i--) {
        dq.push_front({arr[i], i});
    }

    for (int i = end + 1; i < n; i++) {
        dq.push_back({arr[i], i});
    }

    // for (auto it: dq) cout << it.first << " ";
    // cout << nl;
    
    
    if (!is_sortedd(dq)) {
        NO;
    }
    else {
        YES;
        cout << ++ans.first << " " << ++ans.second << nl;
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
    solve();
    return 0;
}