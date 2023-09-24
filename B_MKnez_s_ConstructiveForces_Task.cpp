#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n%2 != 0){
        if(n < 5){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
            int temp = n/2;
            for(int i=0; i<n; i++){
                if(i%2 == 0){
                    cout << temp-1 << " ";
                }else{
                    cout << -temp << " ";
                }
            }
            cout << "\n";
        }
    }else{
        cout << "YES" << "\n";
        for(int i=1; i<=n; i++){
            if(i%2 == 0){
                cout << -1 << " ";
            }else{
                cout << +1 << " ";
            }
        }
        cout << "\n";
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