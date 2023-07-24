#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    set<char> st;
    for(int i=0; i<n; i++){
        char ch;
        cin >> ch;
        st.insert(ch);
    }
    if(n == st.size()){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}