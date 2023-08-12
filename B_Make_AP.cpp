#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if((2*b - c) > 0 && (2*b - c) % a == 0){
        cout << "YES" << "\n";
    }
    else if((c+a) > 0 && ((c+a) % (2*b)) == 0){
        cout << "YES" << "\n";
    }
    else if((2*b - a) > 0 && (2*b - a) % c == 0){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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