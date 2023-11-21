#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"


ll n, k;
vector<int> arr(1e6);

bool pred(double mid){
    ll cnt = 0;
    for(int i=0; i<n; i++){
        cnt += arr[i]/mid;
    }    
    return cnt >= k;
}


void solve(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    double eps = 1e-6;

    double l = 0;
    double h = 1e8;
    cout << setprecision(7);
    while(h - l > eps){
        double mid = (h+l)/2;
        if(pred(mid)){
            l = mid;
        }else{
            h = mid;
        }
    }
    cout << l << nl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}