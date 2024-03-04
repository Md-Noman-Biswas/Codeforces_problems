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
    cin >> n;
    string s;
    cin >> s;
    ll cnt1 = 0;
    ll cnt2 = 0;
    ll consec1 = llmn;
    ll consec2 = llmn;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == '<' && s[i + 1] == '<'){
            cnt1++;
        }else{
            consec1 = max(cnt1, consec1);
            cnt1 = 0;
        }

        if(s[i] == '>' && s[i + 1] == '>'){
            cnt2++;
        }else{
            consec2 = max(cnt2, consec2);
            cnt2 = 0;
        }
    }  
    consec1 = max(cnt1, consec1);
    consec2 = max(cnt2, consec2);
    consec1++;
    consec2++;
    ll ans = max(consec1, consec2);
    // cout << consec1 << nl;
    // cout << consec2 << nl;
    if(ans == 0){
        cout << 2 << nl;
    }else{
        cout << ++ans << nl;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}