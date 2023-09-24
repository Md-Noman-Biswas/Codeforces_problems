#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    ll v1 = INT_MAX;
    vector<ll> ans;
    ll final_ans = 0;
    int secHig = INT_MAX; 
    while(n--){
        int sz;
        cin >> sz;
        vector<ll> arr(sz);
        for(int i=0; i<sz; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        if(sz > 1){
            ans.push_back(arr[1]);
            v1 = min(arr[0], v1);
        }else{
            final_ans += arr[0];
        }
    }
    sort(ans.begin(), ans.end());
    // for(auto it: ans){
    //     cout << it << " ";
    // }
    // cout << "\n";
    for(int i=1; i<ans.size(); i++){
        final_ans += ans[i];
    }
    final_ans += v1;
    cout << final_ans << "\n";
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