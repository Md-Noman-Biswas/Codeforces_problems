#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    char str[n];
    int x=0;
    int y=0;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    for(int i=0; i<n; i++){
        if(str[i] == 'R'){
            x++;
            // cout << x << "\n";
            if(x==1 && y==1){
                ans++;
            }
        }
        else if(str[i] == 'L'){
            x--;
            if(x==1 && y==1){
                ans++;
            }
        }
        else if(str[i] == 'U'){
            y++;
            if(x==1 && y==1){
                ans++;
            }
        }
        else if(str[i] == 'D'){
            y--;
            if(x==1 && y==1){
                ans++;
            }
        }
    }
    if(ans>0){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

