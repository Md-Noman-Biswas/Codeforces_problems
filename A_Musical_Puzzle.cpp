#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<char,char>> st;
    for(int i=0; i<n-1; i++){
        char s1 = s[i];
        char s2 = s[i+1];
        st.insert({s1,s2});
    }
    cout << st.size() << "\n";
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