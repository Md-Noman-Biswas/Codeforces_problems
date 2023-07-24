#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b;
    cin >> a >> b;
    ll mid = (a+1)/2;
    mid = a - mid + 1;
    cout << b/mid << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}