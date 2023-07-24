#include<bits/stdc++.h>
using namespace std;
#define ll long long
void count(ll n){
    ll tk[6] = {100, 50, 10, 5, 2, 1};
    ll cnt[6] = {0};
    for(ll i=0; i<6; i++){
        if(n >= tk[i]){
            cnt[i] = n/tk[i];
            n = n % tk[i];
        }
    }
    ll sum=0;
    for(ll i=0; i<6; i++){
        if(cnt[i] != 0){
            sum += cnt[i];
        }
    }
    cout << sum << "\n";
}
void solve(){
    ll n;
    cin >> n;
    count(n);
}
signed main(){
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