#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0; i<n; i++){
        if(s[i] == '('){
            st.push('(');
        }
        if(!st.empty()){
            if(s[i] == ')' && st.top() == '('){
            st.pop();
            }
        }
    }
    cout << st.size() << nl;
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