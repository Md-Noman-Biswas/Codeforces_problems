#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> arr(3);
    for(int i=0; i<3; i++) cin >> arr[i];
    int t1, t2;
    if(arr[0] == 1){
        cout << 1 << "\n";
        return;
    }
    t1 = arr[0] - 1;
    t2 = abs(arr[1] - arr[2]) + arr[2] -1;
    if(t1 > t2){
        cout << 2 << "\n";
    }
    else if(t1 == t2) cout << 3 << "\n";
    else cout << 1 << "\n";
}
int main(){
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