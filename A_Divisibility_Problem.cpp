#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a,b;
    cin >> a >> b;
    int temp;
    int i=0;
    if(a % b == 0){
        cout << 0 << "\n";
        return;
    }else{
        temp = a/b;
        int x = (temp + 1)*b;
        cout << x - a << "\n";
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