#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int x; 
    cin >> x;
    int cnt = 0;
    if(k == 1){
        if(x == 1){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
            cout << n << "\n";
            for(int i=0; i<n; i++){
                if(i == n-1){
                cout << 1 << "\n";
                break;
            }
            cout << 1 << " ";
            }
        }
    }else if(k == 2){
        if(x == 1 && n%2 == 0){
            cout << "YES" << "\n";
            cout << n/2 << "\n";
            for(int i=0; i<n/2; i++){
                if(i == (n/2) - 1){
                        cout << 2 << "\n";
                        break;
                    }
                    cout << 2 << " ";
            }
        }else if(x == 1 && n%2 != 0){
            cout << "NO" << "\n";
        }else if(x == 2 && n%2 == 0){
            cout << "YES" << "\n";
            cout << n << "\n";
            for(int i=0; i<n; i++){
            if(i == n-1){
                cout << 1 << "\n";
                break;
            }
            cout << 1 << " ";
            }
        }else if(x == 2 && n%2 != 0){
            cout << "YES" << "\n";
            cout << n << "\n";
            for(int i=0; i<n; i++){
            if(i == n-1){
                cout << 1 << "\n";
                break;
            }
            cout << 1 << " ";
        }
        }
    }else if(x != 1){
        cout << "YES" << "\n";
        cout << n << "\n";
        for(int i=0; i<n; i++){
            if(i == n-1){
                cout << 1 << "\n";
                break;
            }
            cout << 1 << " ";
        }
    }else if(x == 1){
            if(n%2 == 0){
                cnt = n/2;
                cout << "YES" << "\n";
                cout << cnt << "\n";
                for(int i=0; i<cnt; i++){
                    if(i == cnt-1){
                        cout << 2 << "\n";
                        break;
                    }
                    cout << 2 << " ";
                }
        }else{
            cout << "YES" << "\n";
            if(n%3 == 0){
                cnt = n/3;
                cout << cnt << "\n";
                for(int i=0; i<cnt; i++){
                    if(i == cnt-1){
                        cout << 3 << "\n";
                        break;
                    }
                    cout << 3 << " ";
                }
            }else{
                int rem = n%3;
                cnt = n/3 + 1;
                cout << cnt << "\n";
                for(int i=0; i<(n/3); i++){
                    cout << 3 << " ";
                }
                cout << rem << "\n";
            }
        }
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