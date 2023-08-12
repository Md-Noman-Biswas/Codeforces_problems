#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int ans = INT_MIN;
    int a, b, c;
    cin >> a >> b >> c;
    int temp1 = a + b * c;
    int temp2 = a * (b + c);
    int temp3 = a * b * c;
    int temp4 = (a+b)*c;
    int temp5 = a + b + c;
    ans = max(ans, temp1);
    ans = max(ans, temp2);
    ans = max(ans, temp3);
    ans = max(ans, temp4);
    ans = max(ans, temp5);
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}