#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll n){
    if(n == 1) return 1;
    if(n == 0) return 1;
    else return fact(n-1)*n;
}
void solve(){
    //cout << "h";
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++) cin >> arr[i];
    ll x = 10 - n;
    //cout << x << "\n";
    ll a = fact(x);
    //cout << "h";
    ll b =fact(2);
    ll c = fact(x-2);
    //cout << a;
    ll ans = (a/(b*c))*6;
    cout << ans << "\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
    solve();
    }
    return 0;
}