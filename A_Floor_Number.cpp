#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n, x;
    cin >> n >> x;
    int cnt = 1;
    if(n <= 2){
        cout << 1 << "\n";
        return;
    }else{
        int temp = 3;
        while(true){
            temp += x;
            cnt++;
            if(temp > n){
                break;
            }
        }
    }
    cout << cnt << "\n";

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