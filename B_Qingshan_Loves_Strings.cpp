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
    string s, t;
    cin >> s >> t;
    string ans;
    for(int i = 0; i < n - 1; i++){
        ans.push_back(s[i]);
        if(s[i] == s[i + 1]){
            for(int j = 0; j < k; j++){
                ans.push_back(t[j]);
            }
        }
    }   
    ans.push_back(s.back());
    //cout << ans << nl;

    bool flag = true;

    for(int i = 0; i < ans.size() - 1; i++){
        if(ans[i] == ans[i + 1]){
            flag = false;
            break;
        }
    }

    if(flag) YES;
    else NO;
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