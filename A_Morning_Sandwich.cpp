#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int b, c, h;
    cin >> b >> c >> h;
    int temp = c+h;
    if(b-1 >= temp){
        cout << temp*2 + 1 << "\n";
    }else{
        cout << b*2 -1 << "\n";
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