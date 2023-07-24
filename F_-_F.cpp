#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin >> n;
   string p;
   cin >> p;
   int cnt = 0;
   for(int i=0; i<n/2; i++){
    if(p[i] == p[n-i-1]) break;

    else if(p[i] != p[n-i-1]){
        cnt++;
        //cout << cnt-1 << "\n";
    }
}
    cout << n-2*cnt << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

