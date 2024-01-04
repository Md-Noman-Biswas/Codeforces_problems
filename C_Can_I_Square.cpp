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
    ll sum = 0;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }   
    //cout << sum << nl;
    ll temp = sqrt(sum);

    if(temp * temp == sum){
        YES;
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