#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    vector<bool> status(n+1, false);
    vector<int> ans;
    ans.push_back(1);
    for(int i=2; i<=n; i++){
        int curr = i;
        if(!status[curr]){
            ans.push_back(i);
            status[i] = true;
            while(curr <= n){
                curr *= 2;
                if(curr <= n){
                    ans.push_back(curr);
                    status[curr] = true;
                }
            }
        }
    }
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