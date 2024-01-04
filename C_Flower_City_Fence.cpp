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
    ll n;
    cin >> n;
    vector<ll> arr(n + 1, 0), rotate(n + 1, 0);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    if(n < arr[1]){
        NO;
        return;
    }
    for(int i=1; i<=n; i++){
        rotate[arr[i]]++;
    }
    for(int i=n-1; i>0; i--){
        rotate[i] += rotate[i+1];
    }
    if(rotate == arr) YES;
    else NO;
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