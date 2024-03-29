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
    ll n, d; 
    cin >> n >> d;
    string ans;
    string s;
    cin >> s;
    bool flag = false;
    if(d == 0){
        s.pb(char(d + '0'));
        cout << s << nl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(s[i] - '0' < d){
            if(flag == false){
                ans.pb(char(d + '0'));
                ans.pb(s[i]);
                flag = true;
                continue;
            }
        }
        ans.pb(s[i]);
    }
    if(flag == false){
        ans.pb(char(d + '0'));
    }
    cout << ans << nl;
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