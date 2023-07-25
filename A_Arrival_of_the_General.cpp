#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int x = -1;
    int y = INT_MAX;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        x = max(x, arr[i]);
        y = min(y,arr[i]);
    }
    int min_index_of_max_value = INT_MAX;
    int max_index_of_min_value = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            min_index_of_max_value = min(min_index_of_max_value,i);
        }
        if(arr[i] == y){
            max_index_of_min_value = i;
        }
    }
    if(min_index_of_max_value == 0 && max_index_of_min_value == n-1){
        cout << 0 << "\n";
        return;
    }
    //cout << min_index_of_max_value << " " << index_min;
    int ans;
    if(min_index_of_max_value > max_index_of_min_value){
        ans = ((n-1) - max_index_of_min_value) + (min_index_of_max_value - 1);
    }else{
        ans = ((n-1) - max_index_of_min_value) + (min_index_of_max_value);
    }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}