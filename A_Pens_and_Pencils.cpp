#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    float a,b,c,d,k;
    cin >> a >> b >> c >> d >> k;
    int t1 = ceil(a/c);
    int t2 = ceil(b/d);
    if(t1 + t2 <= k){
        cout << t1 << " " << t2 << "\n";
    }else{
        cout << -1 << "\n";
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