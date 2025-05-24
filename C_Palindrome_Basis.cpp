#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 4e4 + 2;
const int INF = 1e9 + 10;

bool check(ll n) {
    ll temp = n;
    string digits;
    while (temp) {
        int d = temp % 10;
        digits.push_back(d + '0');
        temp /= 10;
    }
    string rev = digits;
    reverse(rev.begin(), rev.end());
    return rev == digits;
}

vector<ll> palindromes;
vector<vector<ll>> dp(N + 1, vector<ll> (500, -1));

void init() {
    for (int i = 1; i <= N; i++) {
        if (check(i)) {
            palindromes.push_back(i);
        }
    }
}

ll m = palindromes.size();

ll f(ll n, ll ind) {
    if (n == 0) return 1;
    if (ind < 0 || n < 0) return 0;
    
    if (dp[n][ind] != -1) return dp[n][ind];

    ll way1 = 0, way2 = 0;
    way1 = f(n - palindromes[ind], ind) % mod;
    if (ind > 0) way2 += (f(n, ind - 1) % mod);

    return dp[n][ind] = (way1 + way2) % mod;
}

void solve(){
    ll n; 
    cin >> n;
    ll m = palindromes.size();
    cout << f(n, m - 1) << nl;
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
    init();
    f(N, m - 1);
    while(t--) {
        solve();
    }
    return 0;
}