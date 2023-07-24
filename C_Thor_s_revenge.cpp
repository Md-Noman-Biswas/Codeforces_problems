#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    if(a == b){
        cout << 1 << "\n";
        return;
    }
    while(a<=b){
        a = a*3;
        b = b*2;
        cnt++;
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