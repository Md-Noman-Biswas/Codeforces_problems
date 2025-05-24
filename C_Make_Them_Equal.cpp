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
const int N = 3e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n;
    char ch;
    cin >> n >> ch;
    string s;
    cin >> s;
    set<char> st;
    for(auto it: s){
        st.insert(it);
    }   
    if(st.size() == 1 && st.find(ch) != st.end()){
        cout << 0 << nl;
        return;
    }
    ll ans = -1;
    bool xd = true;
    for(int i = 1; i <= n; i++){
        xd = true;
        for(int j = i; j <= n; j += i){
            if(s[j - 1] != ch){
                xd = false;
                break;
            }
        }
        if(xd){
            ans = i;
            break;
        }
    }
    if(xd){
        cout << 1 << nl;
        cout << ans << nl;
    }else{
        cout << 2 << nl;
        cout << n - 1 << " " << n << nl;
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