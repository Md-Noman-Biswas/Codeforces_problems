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
    bool flag = false;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == ')' && s[i+1] == '('){
            flag = true;
            break;
        }
    }   

    string ans1, ans2;

    for(int i = 0; i < s.size(); i++){
        ans1.pb('(');
    }
    for(int i = 0; i < s.size(); i++){
        ans1.pb(')');
    }

    for(int i = 0; i < s.size(); i++){
        ans2.pb('(');
        ans2.pb(')');
    }

    if(ans1.find(s) != string::npos && ans2.find(s) != string::npos){
        NO;
        return;
    }

    YES;
    if(flag){
        cout << ans1 << nl;
    }else{
        cout << ans2 << nl;
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