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
    vector<ll> arr(n), pref(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    string s;
    cin >> s;

    pref[0] = arr[0];
    for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];
    vector<ll> hsh(n, 1);
    deque<ll> left, right;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') {
            left.push_back(i);
        }
        else {
            right.push_back(i);
        }
    }

    ll score = 0;
    while (!left.empty() && !right.empty()) {
        ll most_left = left.front();
        left.pop_front();
        ll most_right = right.back();
        right.pop_back();
        //cout << most_left << " " << most_right << nl;
        if (most_right > most_left) score += pref[most_right] - (most_left - 1 >= 0 ? pref[most_left - 1] : 0);
        //cout << score << nl;
    }

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