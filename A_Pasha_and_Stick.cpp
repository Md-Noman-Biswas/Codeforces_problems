#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    if(n%2 != 0){
        cout << 0 << "\n";
        return;
    }
    n /= 2;
    if(n%2 != 0){
        cout << (n-1)/2 << "\n";
    }else{
        n--;
        cout << n/2 << "\n";
    }

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     solve();
    return 0;
}