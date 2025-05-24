#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;


void solve(){
    ll n;
    cin >> n;
    bool flag = false;
    ll ind, left_val, right_val;
    ll curr = 1;
    while (1) {
        ll v;
        for (int i = 1; i <= 10; i++) {
            v = pow(curr, i) * pow(curr - 1, 10 - i);
            // cout << pow(curr, i) << " " << pow(curr - 1, 10 - i) << nl;
            if (v >= n) {
                ind = i;
                left_val = curr;
                right_val = curr - 1;
                flag = true;
                break;
            } 
        }
        curr++;
        if (flag) break;
    }
    // cout << left_val << " " << ind << nl;
    string ans = "codeforces";
    for (int i = 0; i < ind; i++) {
        for (int j = 0; j < left_val; j++) {
            cout << ans[i];
        }
    }
    for (int i = ind; i < 10; i++) {
        for (int j = 0; j < left_val - 1; j++) {
            cout << ans[i];
        }
    }
    cout << nl;
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