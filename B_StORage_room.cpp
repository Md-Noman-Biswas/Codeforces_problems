#include<bits/stdc++.h>
using namespace std;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    int arr[n][n];
    vector<ll> ans; 
    for(int i=0; i<n; i++){
        int z = (1<<30) - 1;
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(i != j) z &= arr[i][j];
        }
        ans.push_back(z);
    }
    bool flag = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;
            flag &= ((ans[i]|ans[j]) == arr[i][j]);
        }
    }
    if(flag){
        YES;
        for(auto it: ans){
            cout << it << " ";
        }
        cout << nl;
    }else{
        NO;
    }
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