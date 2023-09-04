#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    set<ll> st;
    ll sum = 0;
    st.insert(sum);
    int cnt = 0;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        sum += x;
        if(st.find(sum) != st.end()){
            cnt++;
            st.clear();
            st.insert(0);
            sum = 0;
            sum += x;
        }
        st.insert(sum);
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}