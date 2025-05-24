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

bool check(ll mid, ll k, string &s, vector<ll> &penalty) {
    ll cnt = 0;
    ll n = penalty.size();
    for (int i = 0; i < penalty.size(); i++) {
        if (penalty[i] > mid && s[i] == 'B') {
            ll r = i + 1;
            while (r < n) {
                if (s[r] == 'R') {
                    if (penalty[r] > mid) {
                        // cout << "->" <<  i << " " << r << nl;
                        // cnt++;
                        break;
                    }
                }
                r++;
            }
            cnt++;
            i = r;
        }
    }
    // cout << mid << " " << cnt << nl;
    return cnt <= k;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> penalty(n);
    ll mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> penalty[i];
        mx = max(mx, penalty[i]);
    }

    ll l = 0, r = mx;
    ll ans = mx;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(mid, k, s, penalty)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

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
