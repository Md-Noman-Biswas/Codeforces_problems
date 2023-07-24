#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin >> t;
    int count = 0;
    while(t--){
    int arr[2];
        for(int i=0; i<2; i++){
            cin >> arr[i];
        }
        int room = arr[1] - arr[0];
        if(room >= 2){
            count++;
        }
    }
    cout << count << "\n";
}
int main(){
    solve();
}