#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int arr[m];
    int a, b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
    }
    if(m < n){
        cout << "YES\n";
    } else{ 
        cout << "NO\n";
    }
}
int main(){
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
