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
    ll ans = 1;
    if(s[0] == '?') ans *= 9;
    else if(s[0] == '0'){
        cout << 0 << nl;
        return;
    }
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '?'){
            ans *= 10;
        }
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