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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    ll ans = llmx;
    bool exist = false;
    for(int i = 'a'; i <= 'z'; i++){
        int l = 0;
        int r = n - 1;
        flag = true;
        ll cnt = 0;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else if(s[l] != s[r]){
                if(s[l] == i){
                    l++;
                    cnt++;
                }
                else if(s[r] == i){
                    r--;
                    cnt++;
                }else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag != false){
            ans = min(ans, cnt);
            exist = true;
        }
    } 
    if(!exist){
        cout << -1 << nl;
        return;
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