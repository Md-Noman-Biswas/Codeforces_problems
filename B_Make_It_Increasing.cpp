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
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    ll cnt = 0;
    for(int i = n-1; i>0; i--){
        if(arr[i-1] >= arr[i]){
            while(arr[i-1] >= arr[i] and arr[i-1] > 0){
                arr[i-1] /= 2;
                cnt++;
            }

            if(arr[i-1] == arr[i]){
                cout << -1 << nl;
                return;
            }
        }
    }
    cout << cnt << nl;
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