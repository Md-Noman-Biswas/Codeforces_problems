#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
}
    for(int i=0; i<n; i++){
        if(arr[i] >= arr[k-1] && arr[i] !=0){
            ans++;
    }
    }
    cout << ans << endl;
    }

