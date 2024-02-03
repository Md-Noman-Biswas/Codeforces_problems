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
    string zero;
    string one;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            zero.pb(s[i]);
        }else{
            break;
        }
    }

    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '1'){
            one.pb(s[i]);
        }else{
            break;
        }
    }
    if(one.size() + zero.size() == n){
        cout << s << nl;
        return;
    }
    else if(s.size() == 1){
        cout << s[0] << nl;
        return;
    }else{
        for(auto it: zero){
            cout << it;
        }
        cout << '0';
        for(auto it: one){
            cout << it;
        }
        cout << nl;
    }
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