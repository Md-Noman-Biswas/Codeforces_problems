#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,l;
    cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin >> l;
        arr[l-1] = i;
    }  
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    solve();
}