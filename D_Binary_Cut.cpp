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
    ll cnt1 = 0;
    ll cnt2 = 0;
    ll n = s.size();
    bool flag = false;
    for(int i = 0; i < n - 1; i++){
        if(s[i] < s[i + 1]){
            flag = true;
            break;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(s[i] == '1' && s[i + 1] == '0'){
            cnt1++;
        }else{
            continue;
        }
    }
    if(s.back() == '1') cnt1++;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == '0' && s[i + 1] == '1'){
            cnt2++;
        }else{
            continue;
        }
    }
    if(s.back() == '0') cnt2++;
    ll ans = cnt1 + cnt2;
    if(flag) ans--;
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