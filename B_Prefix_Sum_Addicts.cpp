#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1e5+5;
int srr[N];
int arr[N];
void solve(){
    ll n, k;
    cin >> n >> k;
    for(int i=n-k+1; i<=n; i++){
        cin >> srr[i];
    }
    if(k == 1){
        cout << "YES" << "\n";
        return;
    }
    for(int i=n-k+2; i<=n; i++){
        arr[i] = srr[i] - srr[i-1];
    }
    if(!is_sorted(arr + n - k + 2, arr+n+1)){
        cout << "NO" << "\n";
        return;
    }
    if(srr[n-k+1] <= arr[n-k+2] * 1LL * (n-k+1)){
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << nl;
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