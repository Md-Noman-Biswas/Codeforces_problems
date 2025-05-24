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
    string s;
    cin >> s;
    ll n = s.size();
    ll one = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') one++;
    }
    if(one == 0){
        cout << 0 << nl;
        return;
    }
    s += s;
    ll max_cons = 0;
    ll cons = 0;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == '1' && s[i + 1] == '1'){
            cons++;
        }else{
            max_cons = max(max_cons, cons);
            cons = 0;
        }
    }   
    max_cons = max(max_cons, cons);
    max_cons++;
    if(one == n){
        cout << n * n << nl;
        return;
    }
    ll ans = llmn;
    ll temp = max_cons;
    for(int i = 1; i <=max_cons; i++){
        //cout << temp << " " << i << nl;
        ans = max(ans, temp * i);
        temp--;
    }
    cout << ans << nl;
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