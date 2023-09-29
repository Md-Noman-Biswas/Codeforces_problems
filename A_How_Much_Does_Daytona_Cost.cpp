#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    bool flag = false;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == k){
            flag = true;
        }
    }
    if(flag == true){
        cout << "YES" << nl;
    }else{
        cout << "NO" << nl;
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