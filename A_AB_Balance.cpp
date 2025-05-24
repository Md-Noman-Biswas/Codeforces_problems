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

char flip(char c){
    if(c == 'a') return 'b';
    else return 'a';
}

void solve(){
    string s;
    cin >> s;
    bool a = true;
    bool b = true;
    string abs;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' && a == true){
            a = false;
            b = true;
            abs.push_back(s[i]);
        }
        if(s[i] == 'b' && b == true){
            b = false;
            a = true;
            abs.push_back(s[i]);
        }
    }
    if(abs.size() % 2 != 0){
        cout << s << nl;
    }else{
        char ch = s.back();
        s.pop_back();
        s.push_back(flip(ch));
        cout << s << nl;
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