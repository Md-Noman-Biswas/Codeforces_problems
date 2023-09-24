#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i=2; i<=n; i++){
        ans.push_back(i);
    }
    ans.push_back(1);
    for(auto it: ans){
        cout << it << " ";
    }
    cout << nl;
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