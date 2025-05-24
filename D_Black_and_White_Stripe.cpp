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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll mn = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'W'){
            mn++;
        }
    }
    ll window = mn;

    for(int i = k; i < s.size(); i++){
        if(s[i - k] == 'W'){
            window--;
        }
        if(s[i] == 'W'){
            window++;
        }
        mn = min(window, mn);
    }
    cout << mn << nl;
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