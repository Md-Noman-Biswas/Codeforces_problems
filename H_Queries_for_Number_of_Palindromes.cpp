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
const int N = 5001;
const int INF = 1e9 + 10;

string s;
vector<vector<int>> dp1(N, vector<int> (N, -1));
vector<vector<int>> dp2(N, vector<int> (N, -1));

bool is_palindrome(ll l, ll r) {
    if (l > r) return true;
    if (dp1[l][r] != -1) return dp1[l][r];
    return dp1[l][r] = ((s[l] == s[r]) && is_palindrome(l + 1, r - 1)); 
}

ll f(ll l, ll r) {
    if (l > r) return 0;
    if (dp2[l][r] != -1) return dp2[l][r];
    return dp2[l][r] = is_palindrome(l, r) + f(l, r - 1) + f(l + 1, r) - f(l + 1, r - 1);
}

void solve(){
    cin >> s;
    ll n;
    cin >> n;
    while (n--) {
        ll l, r;
        cin >> l >> r;
        --l, --r;

        cout << f(l, r) << nl;
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