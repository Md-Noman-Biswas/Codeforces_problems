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

ll num(deque<char> &dq){
    string s;
    for(auto it: dq){
        s.push_back(it);
    }
    return stoi(s);
}

void solve(){
    string s;
    cin >> s;
    ll ans = s.size();
    ll n = s.size(); 
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            ll temp = (s[i] - '0') * 10 + (s[j] - '0');
            if(temp % 25 == 0){
                ll ope = (j - i - 1) + (n - j - 1);
                ans = min(ans, ope);
            }
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