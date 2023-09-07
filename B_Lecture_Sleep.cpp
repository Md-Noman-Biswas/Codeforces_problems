#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> status(n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cin >> status[i];
        if(status[i]) sum += arr[i];
    }

    int window_sum = 0;
    for(int i=0; i<k; i++){
        if(!status[i]){
            window_sum += arr[i];
        }
    }
    int fin_window_sum = window_sum;
    for(int i=k; i < n; i++){
        if(!status[i]) window_sum += arr[i];
        if(!status[i-k]) window_sum -= arr[i-k];
        fin_window_sum = max(window_sum, fin_window_sum);
    }

    ll ans = fin_window_sum + sum;
    cout << ans << "\n";

}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}