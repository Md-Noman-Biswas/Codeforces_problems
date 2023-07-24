#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        sum += arr[n-1] - arr[i];
    }
    cout << sum << "\n";

}
int main(){
    solve();
}