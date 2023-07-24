#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_dig(ll n){
    ll temp = n;
    ll sum = 0;
    while(n != 0){
        ll rem = n%10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
void solve(){
    ll n;
    cin >> n;
    ll div = sum_dig(n);
    if(n%div == 0){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}