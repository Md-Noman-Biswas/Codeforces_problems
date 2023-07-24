#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    set<int> st;
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            arr[i] = -arr[i+1];
        }
        st.insert(arr[i]);
    }
    cout << st.size() << "\n";
 
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}