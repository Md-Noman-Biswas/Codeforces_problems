#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cnt=0;
    int cnt2 = 0;
    int fix = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] != arr[i+1]){
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main(){
    solve();
}
