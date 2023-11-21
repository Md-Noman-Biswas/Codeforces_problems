#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> brr(m);
    vector<int> ans;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<m; i++) cin >> brr[i];
    int l = 0;
    int r = 0;
    while(l < n && r < m){
        if(arr[l] > brr[r]){
            ans.push_back(brr[r]);
            r++;
        }else{
            ans.push_back(arr[l]);
            l++;
        }
    }   
    while(l < n){
        ans.push_back(arr[l]);
        l++;
    }
    while(r < m){
        ans.push_back(brr[r]);
        r++;
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
    solve();
    return 0;
}