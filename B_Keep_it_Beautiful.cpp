#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
   for(int i=0; i<n; i++){
        cin >> arr[i];
   }
    ll curr = arr[1];
    vector<int> ans;
    ll current_min = INT_MAX;
    ll current_max = INT_MIN;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(i == 0) ans.push_back(1);
        else if(i == 1) ans.push_back(1);
        else if(arr[1] >= arr[0]){
            if(arr[i] >= curr && flag == false){
                ans.push_back(1);
                curr = arr[i];
            }
            else if(arr[i] <= arr[0] && flag == false){
                ans.push_back(1);
                curr = arr[i];
                flag = true;
            }
            else if(arr[i] >= curr && arr[i] <= arr[0]){
                ans.push_back(1);
                curr = arr[i];
            }else{
                ans.push_back(0);
            }
        }else{
            if(arr[i] >= curr && arr[i] <= arr[0]){
                ans.push_back(1);
                curr = arr[i];
            }else{
                ans.push_back(0);
            }
        }
    }    
    for(auto it: ans){
        cout << it;
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