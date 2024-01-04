#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n, k;
    cin >> n;
    cin >> k;
    vector<ll> arr(n);
    ll temp = 1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        temp = arr[i]*temp;
    }   
    if(2023 % temp == 0){
        YES;
        cout << 2023/temp << " ";
        for(int i=0; i<k-1; i++){
            cout << 1 << " ";
        }
        cout << nl;
    }else{
        NO;
    }
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