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
    vector<ll> pref(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    ll last = arr[0];
    for(int i=0; i<n; i++){
        if(i == 0){
            cout << arr[0] << " ";
            continue;
        }
        if(i % 2 != 0){
            ll x = floor((last + arr[i])/(2*1.0));
            cout << x * 2 << " ";
            last = x*2;
        }else{
            ll x = floor((last + arr[i])/(2*1.0));
            cout << x * 2 << " ";
            last = x*2;
        }
        
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