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
    multiset<char> st;
    ll temp = 2 * n - 2;
    int cnt = 0;
    while(temp--){
        char c;
        cin >> c;
        if((int)c > 90){
            st.insert(c);
        }else{
            char l_c = tolower(c);
            auto it = st.find(l_c);
            if(it == st.end()){
                cnt++;
            }else{
                st.erase(it);
            }
        }
    }
    cout << cnt << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}