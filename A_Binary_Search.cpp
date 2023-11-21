#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    while(k--){
        int x;
        cin >> x;
        int l = 0;
        int h = n-1;
        while(h - l > 1){
            int mid = (h+l)/2;
            if(arr[mid] > x){
                h = mid - 1;
            }else{
                l = mid;
            }
        }
        if(arr[h] == x || arr[l] == x){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}