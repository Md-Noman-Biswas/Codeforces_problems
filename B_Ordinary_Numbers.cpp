#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, cnt = 0, start;
    cin >> n;
    for(int i=1; i<=9; i++){
        start = i;
        while(start <= n){
            cnt++;
            start = start*10 + i;
        }
    }
    cout << cnt << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}