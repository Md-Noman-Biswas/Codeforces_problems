#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    string s;
    cin >> s;
    ll flag = -1;
    
    stack<ll> st;

    for (int i = 0; i < s.size(); i++) {
        if (st.empty()) {
            st.push(s[i]);
        }
        else {
            if (s[i] == st.top()) {
                st.pop();
                if (flag == -1) flag = 0;
                flag ^= 1;
            }
            else {
                st.push(s[i]);
            }
        }
    }
    // cout << flag << nl;
    if (flag == -1) {
        NO;
    }
    else {
        if (flag == 1) {
            YES;
        }
        else {
            NO;
        }
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
    solve();
    return 0;
}