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
    ll w, h;
    cin >> w >> h;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    ll ww, hh;
    cin >> ww >> hh;

    ll width = max(x1, x2) - min(x1, x2);
    ll height = max(y1, y2) - min(y1, y2);
    //cout << width << " " << height << nl;
    if (width + ww > w && height + hh > h) {
        cout << -1 << nl;
        return;
    }


    ll rem_up = h - y2;
    ll rem_down = y1 - 0;
    
    ll rem_left = x1 - 0;
    ll rem_right = w - x2;

   //cout << rem_up << " " << rem_down << nl;
    //cout << rem_left << " " << rem_right << nl;

    ll ans1 = llmx;
    ll ans2 = llmx;

    if (height + hh <= h || width + ww <= w) {
        if (height + hh <= h) {
            ans1 = min(hh - rem_up, hh - rem_down);
            if (ans1 < 0) {
                ans1 = 0;
            }
        }
        if (width + ww <= w) {
            ans2 = min(ww - rem_left, ww - rem_right);
            if (ans2 < 0) {
                ans2 = 0;
            }
        }
    }
    else {
        ans1 = -1;
    }

    double ans = (min(ans1, ans2));
    cout << fixed << setprecision(9) << ans << nl;
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