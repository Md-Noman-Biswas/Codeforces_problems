#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 998244353
const int N = 2e5 + 7;
const int INF = 1e9 + 10;
vector<ll> fact(N, 0);
void pre(){
    fact[0] = 1;
    for(ll i = 1; i < N; i++){
        fact[i] = ((fact[i - 1] % mod) * (i % mod)) % mod;
    }
}

void solve(){
    string s;
    cin >> s;
    ll cons = 1;
    char last = s[0];
    vector<ll> ans;
    ll ope = 0;
    ll ways = 1;
    ll positions = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == last){
            cons++;
        }else{
            ope += cons - 1;
            ways = ((ways % mod) * ((cons) % mod)) % mod;
            last = s[i];
            cons = 1;
        }
    }
    if(cons != 1){
        ways = (ways * (cons)) % mod;
        ope += cons - 1;
    }
    ways = ((ways % mod) * (fact[ope] % mod)) % mod;
    cout << ope << " " << ways << nl;
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
    pre();
    while(t--) {
        solve();
    }
    return 0;
}