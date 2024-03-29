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
    ll sum = 0;
    ll odd = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        if(arr[i] % 2 != 0) odd++;
        if(i == 0){
            cout << arr[i] << " ";
        }else{
            if(odd % 3 == 1){
                cout << sum - (odd + 2) / 3 << " ";
            }else{
                cout << sum - odd / 3 << " ";
            }
        }
    }
    cout << nl;
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