#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    bool neg = false;
    int ans = INT_MIN;
    bool consecNeg = false;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] == -1) neg = true;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i] == -1 &&  arr[i+1] == -1) consecNeg = true;
    }
    if(!neg){
        cout << sum - 4 << "\n";
        return;
    }else{
        if(consecNeg){
            cout << sum + 4 << "\n";
        }else{
            cout << sum << "\n";
        }
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}