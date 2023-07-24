#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int temp;
    if(n&1){
        if(n == 1){
            cout << 3 << "\n";
        }else{
            cout << 1 << "\n";
        }
    }else{
        if((n&(n-1)) == 0){
            cout << n+1 << "\n";
        }else{
            for(int i=0; i<32; i++){
                if(n & (1<<i)){
                    temp = i;
                    break;
                }
            }
            int ans = 1<<temp;
            cout << ans << "\n";
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