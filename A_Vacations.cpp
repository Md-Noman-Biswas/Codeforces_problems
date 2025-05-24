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
const int N = 200;
const int INF = 1e9 + 10;

ll n;
vector<ll> arr(N);
vector<vector<ll>> dp(N, vector<ll> (3, llmx));

ll f(ll ind, ll last) {
    if (ind >= n) return 0;

    // 0->contest
    // 1-> gym

    if (dp[ind][last + 1] != llmx) return dp[ind][last + 1];

    ll cnt = 0;
    if (arr[ind] == 0) {
        cnt += 1 + f(ind + 1, -1);
    }
    else if (arr[ind] == 1) {
        if (last != 0) {
            cnt += f(ind + 1, 0);
        }
        else {
            cnt += 1 + f(ind + 1, -1);
        }
    }
    else if (arr[ind] == 2) {
        if (last != 1) {
            cnt += f(ind + 1, 1);
        }
        else {
            cnt += 1 + f(ind + 1, -1);
        }
    }
    else if (arr[ind] == 3){
        if (last == -1) {
            cnt += min(f(ind + 1, 1), f(ind + 1, 0));
        }
        else if (last ==  1) {
            cnt += f(ind + 1, 0);
        }
        else {
            cnt += f(ind + 1, 1);
        }
    }

    return dp[ind][last + 1] = cnt;

}

void solve(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << f(0, -1) << nl;
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