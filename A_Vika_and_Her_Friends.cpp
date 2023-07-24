#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int X, Y;
    cin >> X >> Y;
    bool flag = false;
    if(k==1){
        while(k--){
            int p,q;
            cin >> p >> q;
        }
        cout << "YES" << "\n";
        return;
    }
    vector<int> arr;
    while(k--){
        int x,y;
        cin >> x >> y;
        int neighbour = abs(X-x)+abs(Y-y);
        arr.push_back(neighbour);
    }
    if(k>=3){
        cout << "NO" << "\n";
    }else{
        for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
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