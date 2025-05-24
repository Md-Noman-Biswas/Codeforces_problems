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

void solve(){
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    string xd;
    for(int i = 0; i < s.size(); i++){
        xd.push_back(s[i]);
        if(s[i] == 'g') break;
    }
    s += xd;
    ll ind = -1;
    ll ans = llmn;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == 'g'){
            ind = i;
        }
        if(s[i] == c){
            ll diff = ind - i;
            ans = max(ans, diff);
        }
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