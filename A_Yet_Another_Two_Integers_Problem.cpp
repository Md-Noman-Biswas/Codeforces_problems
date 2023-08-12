#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a, b;
    cin >> a >> b;
    int temp = abs(a-b);
    if(temp % 10 == 0){
        cout << temp/10 << "\n";
    }else{
        cout << temp/10 + 1 << "\n";
    }
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