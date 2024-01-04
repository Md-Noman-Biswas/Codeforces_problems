#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

ll digit(ll n){
    ll temp = n;
    ll cnt = 0;
    while(temp){
        temp /= 10;
        cnt++;
    }
    return cnt;
}

void solve(){
    ll n;
    cin >> n;
    if(n >= 0){
        cout << n << nl;
    }else{
        if(n % 10 == 0 && digit(n) == 2){
            cout << 0 << nl;
            return;
        }else{
            ll temp = abs(n);
            ll lst1 = temp % 10;
            temp /= 10;
            ll xd = temp;
            ll lst2 = xd % 10;
            xd /= 10;

            ll x = min(lst1, lst2);
    
            if(lst1 == x){
                temp /= 10;
                if(abs(n) < 100){
                    cout << -x << nl;
                }else{
                    cout << -temp << x << nl;
                }
            }else{
                if(abs(n) < 100){
                    cout << -x << nl;
                }else{
                    cout << -xd << x << nl;
                }
            }

        }
    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}