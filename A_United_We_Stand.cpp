#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    int cnt = 0;
    ll mini = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mini = min(arr[i], mini);
    }
    //cout << mini << "\n";
    vector<ll> ans1;
    vector<ll> ans2;
    for(int i=0; i<n; i++){
        if(arr[i] == mini){
            ans1.push_back(arr[i]);
        }else{
            ans2.push_back(arr[i]);
        }
    }
    if(ans1.size() == 0 || ans2.size() == 0){
        cout << -1 << "\n";
    }else{
        cout << ans1.size() << " " << ans2.size() << "\n";
        for(auto it: ans1){
            cout << it << " ";
        }
        cout << "\n";
        for(auto it: ans2){
            cout << it << " ";
        }
        cout << "\n";
    }
    
    
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