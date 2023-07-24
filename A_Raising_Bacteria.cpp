#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int x;
    cin >> x;
    int cnt = 0;
    for(int i=31; i>=0; i--){
        if((x>>i)&1){
            cnt++;
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