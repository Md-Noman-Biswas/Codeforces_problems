#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=0;
    int ans;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> m;
            if(m==1){
                ans = abs(i-2) + abs(j-2);
                cout << ans << endl;
            }
        }
    }
}