#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    ll temp = (n*(n+1))/2;
    ll temp2 = (k*(k+1))/2;
    if(x > temp || temp2 > x){
        cout << "NO" << nl;
    }else{
        ll sum = 0;
        ll cnt = 0;
        for(int i=n; ; i--){
            cnt++;
            sum += i;
            if(cnt == k){
                break;
            }
        }
        if(sum >= x){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
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