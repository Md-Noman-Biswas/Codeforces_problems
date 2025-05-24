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
    vector<ll> ans(6, 0);
    vector<ll> arr = {4, 8, 15, 16, 23, 42};
    for (int i = 1; i <= 4; i++) {
        cout << "? " << i << " " << i + 1 << nl;
        fflush(stdout);
        cin >> ans[i - 1];
    }

    do {
        bool flag = true;
        for (int i = 1; i <= 4; i++) {
            if (arr[i - 1] * arr[i] != ans[i - 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            break;
        }
    } while (next_permutation(arr.begin(), arr.end()));

    cout << "! ";
    for (auto it: arr) cout << it << " ";
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
    solve();
    return 0;
}