#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int a,b;
    cin >> n;
    int res[1000];
    int count = 0;
    int max=0;
    int temp = 0;
    while(n--){
        cin >> a >> b;
        //int count = temp;
        count = (temp - a) + b;
        temp = count;
        if(count > max){
            max = count;
        }
        }  
        cout << max << "\n";     
    }
    // sort(res,res+n);
    // cout << res << "\n";
int main(){
    solve();
}