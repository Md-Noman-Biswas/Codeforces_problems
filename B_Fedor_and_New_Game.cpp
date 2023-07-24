#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> arr(m+1);
    for(int i=0; i < m+1; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=0; i < m; i++){
        int x = arr[i]^arr[m];
        int can_f = __builtin_popcount(x);
        if(can_f <= k){
            cnt++;
        }
    }
    cout << cnt << "\n";
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}