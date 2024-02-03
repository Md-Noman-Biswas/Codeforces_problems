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
    vector<ll> ans;
    if((s[0] - '0') > 4 && (s[0] - '0') != 9){
        ll temp = s[0] - '0';
        ll x = 9 - temp;
        ans.pb(x);
    }else{
        ans.pb(s[0] - '0');
    }

    for(int i=1; i<s.size(); i++){
        if((s[i] - '0') > 4){
            ll temp = s[i] - '0';
            ll x = 9 - temp;
            ans.pb(x);
        }else{
            ans.pb(s[i] - '0');
        }
    }

    for(auto it: ans){
        cout << it;
    }
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
