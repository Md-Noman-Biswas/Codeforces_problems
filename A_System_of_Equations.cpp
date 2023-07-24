#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int cnt=0;
    for(int i=0; i<500; i++){
        for(int j=0; j<500; j++){
            if((i*i + j) == n && (i + j*j) == m){
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}