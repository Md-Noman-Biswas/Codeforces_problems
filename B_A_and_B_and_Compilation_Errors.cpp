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
    vector<ll> sum(3);
    ll num1, num2;
    ll t = 3;
    ll index = 0;
    while(t--){
        vector<ll> arr(n);
        ll total = 0;
        for(int j=0; j<n; j++){
            cin >> arr[j];
            total += arr[j];
        }
        n--;
        sum[index] = total;
        index++;
    }
    num1 = sum[0] - sum[1];
    num2 = sum[1] - sum[2];
    cout << num1 << nl;
    cout << num2 << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}