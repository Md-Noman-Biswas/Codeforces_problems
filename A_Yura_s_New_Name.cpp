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
    string s;
    cin >> s;
    string ans;
    ll cnt = 0;
    if(s[0] != '^'){
        ans.pb('^');
        cnt++;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '_' && ans.back() == '_'){
            ans.pb('^');
            cnt++;
        }
        ans.pb(s[i]);
    }
    if(ans.back() == '_'){
        cnt++;
        ans.pb('^');
    }
    if(ans.size() == 1){
        if(ans[0] == '^'){
            ans.pb('^');
            cnt++;
        }
    }
    cout << cnt << nl;
}

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