#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    set<int> st;
    int n;
    int q = 10;
    while(q--){
        cin >> n;
        int temp = n % 42;
        st.insert(temp); 
    }
    cout << st.size() << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 10;
    while(t--){
        solve();
    }
    return 0;
}