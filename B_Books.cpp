#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1e5 + 10;

void solve(){
    ll n, time;
    cin >> n >> time;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    int l = 0;
    int r = 0;  
    int ans = 0;
    int cnt = 0;
    int sum = 0; 
    while(r < n && l < n){
        sum += arr[r];
        if(sum <= time){
            cnt++;
            r++;
        }else{
            sum -= arr[l];
            l++;
            r++;
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
