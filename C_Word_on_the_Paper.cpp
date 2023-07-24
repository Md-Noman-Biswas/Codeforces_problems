#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n = 64;
    char s;
    string st;
    while(n--){
        cin >> s;
        if(s >= 'a' && s <= 'z'){
            st.push_back(s);
        }
    }
    cout << st;
    cout << "\n";
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