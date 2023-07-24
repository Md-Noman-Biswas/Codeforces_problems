#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    if(n == 1){
        cout << 1 << "\n";
        return;
    }
    arr[0] = 2;
    arr[n-1] = 3;
    arr[n/2] = 1;
    int j = 4;
    for(int i=1; i<n-1; i++){
        if(i != n/2){
            arr[i] = j;
            j++;
        }else{
            continue;
        }
    }
    for(auto it: arr){
        cout << it << " ";
    }
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}