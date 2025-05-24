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
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> dp(n, 0);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n; i++){
        int step1 = dp[i - 1] + abs(arr[i] - arr[i - 1]);
        int step2 = INT_MAX;
        if(i > 1) step2 = dp[i - 2] + abs(arr[i] - arr[i - 2]);
        dp[i] = min(step1, step2);
    }
    cout << dp[n - 1] << nl;
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