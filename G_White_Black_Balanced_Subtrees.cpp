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

ll cnt;
ll dp(vector<ll> adj[], ll node, string s) {
    ll balance;
    if (s[node - 1] == 'W') balance = 1;
    else balance = -1;
    if (adj[node].empty()) return balance;
    for (auto it: adj[node]) {
        balance += dp(adj, it, s);
    }
    if (balance == 0) cnt++;
    return balance;
}

void solve(){
    cnt = 0;
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    vector<ll> adj[n + 1];
    for(int i = 2; i <= n; i++){
        cin >> arr[i];
        adj[arr[i]].push_back(i);
    }   
    string s;
    cin >> s;
    dp(adj, 1, s);
    cout << cnt << nl;
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