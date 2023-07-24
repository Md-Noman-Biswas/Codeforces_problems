#include <bits/stdc++.h>
using namespace std;
int find(int arr[], int n){
    int cl = 0;
    int ml = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cl++;
        }else {
            if (cl > ml){
                ml = cl;
            }
            cl = 0;
        }
    }
    if (cl > ml){
        ml = cl;
    }
    return ml;
}
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++){
        cin >> arr[j];
    }
    int ans = find(arr, n);
    cout << ans << "\n"; 
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
